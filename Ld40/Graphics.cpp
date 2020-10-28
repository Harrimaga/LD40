#include "Graphics.h"
#include <wincodec.h>

Graphics::Graphics() {
	factory = NULL;
	rendertarget = NULL;
	brush = NULL;
}

Graphics::~Graphics() {
	if (factory) factory->Release();
	if (rendertarget) rendertarget->Release();
	if (brush) brush->Release();
}

bool Graphics::Init(HWND windowHandle) {
	HRESULT res = D2D1CreateFactory(D2D1_FACTORY_TYPE::D2D1_FACTORY_TYPE_SINGLE_THREADED, &factory);
	if (res != S_OK) return false;

	RECT rect;
	GetClientRect(windowHandle, &rect);

	res = factory->CreateHwndRenderTarget(D2D1::RenderTargetProperties(), D2D1::HwndRenderTargetProperties(windowHandle, D2D1::SizeU(rect.right, rect.bottom)), &rendertarget);
	if (res != S_OK) return false;
	res = rendertarget->CreateSolidColorBrush(D2D1::ColorF(1.0f, 1.0f, 1.0f, 1.0f), &brush);
	if (res != S_OK) return false;
	res = DWriteCreateFactory(DWRITE_FACTORY_TYPE_SHARED,__uuidof(IDWriteFactory),reinterpret_cast<IUnknown**>(&pDWriteFactory_));
	if (res != S_OK) return false;
	res = pDWriteFactory_->CreateTextFormat(
		L"Calibri",                // Font family name.
		NULL,                       // Font collection (NULL sets it to use the system font collection).
		DWRITE_FONT_WEIGHT_REGULAR,
		DWRITE_FONT_STYLE_NORMAL,
		DWRITE_FONT_STRETCH_NORMAL,
		72.0f,
		L"en-us",
		&pTextFormat_
	);
	pTextFormat_->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);
	pTextFormat_->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);

	return true;
}

void Graphics::clear(float r, float g, float b) {
	rendertarget->Clear(D2D1::ColorF(r, g, b));
}

ID2D1RenderTarget * Graphics::GetRendertarget()
{
	return rendertarget;
}

void Graphics::FillRectangle(int x, int y, int w, int h, float r, float g, float b, float a) {
	brush->SetColor(D2D1::ColorF(r, g, b, a));
	rendertarget->FillRectangle(D2D1::RectF(x, y, x + w, y + h), brush);
}

void Graphics::FillEllipse(int x, int y, int w, int h, float r, float g, float b, float a) {
	brush->SetColor(D2D1::ColorF(r, g, b, a));
	rendertarget->FillEllipse(D2D1::Ellipse(D2D1::Point2F(x, y), w, h), brush);
}

void Graphics::DrawRectangle(int x, int y, int w, int h, float r, float g, float b, float a, float strokeWidth) {
	brush->SetColor(D2D1::ColorF(r, g, b, a));
	rendertarget->DrawRectangle(D2D1::RectF(x, y, x + w, y + h), brush, strokeWidth);
}

void Graphics::DrawEllipse(int x, int y, int w, int h, float r, float g, float b, float a, float strokeWidth) {
	brush->SetColor(D2D1::ColorF(r, g, b, a));
	rendertarget->DrawEllipse(D2D1::Ellipse(D2D1::Point2F(x, y), w, h), brush, strokeWidth);
}

void Graphics::DrawLine(int x, int y, int x2, int y2, float r, float g, float b, float a, float strokeWidth) {
	brush->SetColor(D2D1::ColorF(r, g, b, a));
	rendertarget->DrawLine(D2D1::Point2F(x, y), D2D1::Point2F(x2, y2), brush, strokeWidth);
}

void Graphics::Drawtext(std::string text, int x, int y, int w, int h, float r, float g, float b, float a)
{
	brush->SetColor(D2D1::ColorF(r, g, b, a));
	rendertarget->DrawText(ToStringW(text).c_str(), (UINT32)text.length(), pTextFormat_, D2D1::RectF(x, y, x + w, y + h), brush);
}

std::wstring Graphics::ToStringW(const std::string& strText)
{
	std::wstring      wstrResult;
	wstrResult.resize(strText.length());
	typedef std::codecvt<wchar_t, char, mbstate_t> widecvt;
	std::locale     locGlob;
	std::locale::global(locGlob);
	const widecvt& cvt(std::use_facet<widecvt>(locGlob));
	mbstate_t   State;
	const char*       cTemp;
	wchar_t*    wTemp;
	cvt.in(State,
		&strText[0], &strText[0] + strText.length(), cTemp,
		(wchar_t*)&wstrResult[0], &wstrResult[0] + wstrResult.length(), wTemp);

	return wstrResult;
}
