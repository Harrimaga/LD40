#include "Sprite.h"

Sprite::Sprite(wchar_t* filename, Graphics* g)
{
	bmp = NULL;
	HRESULT hr;
	IWICImagingFactory *wicFactory = NULL;
	hr = CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER, IID_IWICImagingFactory, (LPVOID*)&wicFactory);
	IWICBitmapDecoder *wicDecoder = NULL;
	hr = wicFactory->CreateDecoderFromFilename(filename, NULL, GENERIC_READ, WICDecodeMetadataCacheOnLoad, &wicDecoder);
	IWICBitmapFrameDecode* wicFrame = NULL;
	hr = wicDecoder->GetFrame(0, &wicFrame);
	IWICFormatConverter *wicConverter = NULL;
	hr = wicFactory->CreateFormatConverter(&wicConverter);
	hr = wicConverter->Initialize(wicFrame, GUID_WICPixelFormat32bppPBGRA, WICBitmapDitherTypeNone, NULL, 0.0, WICBitmapPaletteTypeCustom);
	g->GetRendertarget()->CreateBitmapFromWicBitmap(wicConverter, NULL, &bmp);
	if (wicFactory) wicFactory->Release();
	if (wicDecoder) wicDecoder->Release();
	if (wicConverter) wicConverter->Release();
	if (wicFrame) wicFrame->Release();

	height = 0;
	width = 0;
	x = 0;
	y = 0;
	length = 1;
	this->g = g;
}

Sprite::Sprite(wchar_t * filename, int x, int y, Graphics* g)
{
	bmp = NULL;
	HRESULT hr;
	IWICImagingFactory *wicFactory = NULL;
	hr = CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER, IID_IWICImagingFactory, (LPVOID*)&wicFactory);
	IWICBitmapDecoder *wicDecoder = NULL;
	hr = wicFactory->CreateDecoderFromFilename(filename, NULL, GENERIC_READ, WICDecodeMetadataCacheOnLoad, &wicDecoder);
	IWICBitmapFrameDecode* wicFrame = NULL;
	hr = wicDecoder->GetFrame(0, &wicFrame);
	IWICFormatConverter *wicConverter = NULL;
	hr = wicFactory->CreateFormatConverter(&wicConverter);
	hr = wicConverter->Initialize(wicFrame, GUID_WICPixelFormat32bppPBGRA, WICBitmapDitherTypeNone, NULL, 0.0, WICBitmapPaletteTypeCustom);
	g->GetRendertarget()->CreateBitmapFromWicBitmap(wicConverter, NULL, &bmp);
	if (wicFactory) wicFactory->Release();
	if (wicDecoder) wicDecoder->Release();
	if (wicConverter) wicConverter->Release();
	if (wicFrame) wicFrame->Release();

	this->x = x;
	this->y = y;
	height = 0;
	width = 0;
	length = 1;
	this->g = g;
}

Sprite::Sprite(wchar_t * filename, int width, int height, int x, int y, int length, int endWidth, int endHeight, Graphics* g)
{
	bmp = NULL;
	HRESULT hr;
	IWICImagingFactory *wicFactory = NULL;
	hr = CoCreateInstance(CLSID_WICImagingFactory, NULL, CLSCTX_INPROC_SERVER, IID_IWICImagingFactory, (LPVOID*)&wicFactory);
	IWICBitmapDecoder *wicDecoder = NULL;
	hr = wicFactory->CreateDecoderFromFilename(filename, NULL, GENERIC_READ, WICDecodeMetadataCacheOnLoad, &wicDecoder);
	IWICBitmapFrameDecode* wicFrame = NULL;
	hr = wicDecoder->GetFrame(0, &wicFrame);
	IWICFormatConverter *wicConverter = NULL;
	hr = wicFactory->CreateFormatConverter(&wicConverter);
	hr = wicConverter->Initialize(wicFrame, GUID_WICPixelFormat32bppPBGRA, WICBitmapDitherTypeNone, NULL, 0.0, WICBitmapPaletteTypeCustom);
	g->GetRendertarget()->CreateBitmapFromWicBitmap(wicConverter, NULL, &bmp);
	if (wicFactory) wicFactory->Release();
	if (wicDecoder) wicDecoder->Release();
	if (wicConverter) wicConverter->Release();
	if (wicFrame) wicFrame->Release();

	this->x = x;
	this->y = y;
	this->height = height;
	this->width = width;
	this->length = length;
	endW = endWidth;
	endH = endHeight;
	this->g = g;
}

Sprite::~Sprite()
{
	if (bmp) bmp->Release();
}

void Sprite::Draw() {
	int ww = bmp->GetSize().width + x;
	int hh = bmp->GetSize().height + y;
	if (endW > 0) {
		ww = endW + x;
	}
	if (endH > 0) {
		hh = endH + y;
	}
	g->GetRendertarget()->SetTransform(D2D1::Matrix3x2F::Rotation(rotationD, D2D1::Point2F(x + endW / 2.0, y + endH / 2.0)));
	g->GetRendertarget()->DrawBitmap(bmp, D2D1::RectF(x, y, ww, hh), 1.0f, D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR, D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height));
}

void Sprite::Drawbg(int at) {
	int ww = bmp->GetSize().width + x;
	int hh = bmp->GetSize().height + y;
	if (endW > 0) {
		ww = endW + x;
	}
	if (endH > 0) {
		hh = endH + y;
	}
	g->GetRendertarget()->SetTransform(D2D1::Matrix3x2F::Rotation(rotationD, D2D1::Point2F(x + endW / 2.0, y + endH / 2.0)));
	g->GetRendertarget()->DrawBitmap(bmp, D2D1::RectF(x, y, ww, hh), 1.0f, D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR, D2D1::RectF((float)((int)(0%length)*width), (float)((int)(0 / length)*endH)+at, (float)(int)(0%length)*width + width, (float)((int)(0 / length)*endH + endH)+at));
}

void Sprite::Draw(int index) {
	int ww = bmp->GetSize().width + x;
	int hh = bmp->GetSize().height + y;
	if (endW > 0) {
		ww = endW + x;
	}
	if (endH > 0) {
		hh = endH + y;
	}
	g->GetRendertarget()->SetTransform(D2D1::Matrix3x2F::Rotation(rotationD, D2D1::Point2F(x + endW / 2.0, y + endH / 2.0)));
	g->GetRendertarget()->DrawBitmap(bmp, D2D1::RectF(x, y, ww, hh), 1.0f, D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR, D2D1::RectF((float)((int)(index%length)*width), (float)((int)(index / length)*height), (float)(int)(index%length)*width + width, (float)((int)(index / length)*height + height)));
}

void Sprite::SetPosition(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Sprite::SetRotation(double dir)
{
	rotationD = dir * 90;
}

