#pragma once

#include <Windows.h>
#include <d2d1.h>
#include <dwrite.h>
#include <string>

class Graphics
{
public:
	Graphics();
	~Graphics();

	bool Init(HWND windowHandle);

	void BeginDraw() { rendertarget->BeginDraw(); }
	void EndDraw() { rendertarget->EndDraw(); }
	void clear(float r, float g, float b);
	ID2D1RenderTarget* GetRendertarget();

	void FillRectangle(int x, int y, int w, int h, float r, float g, float b, float a);
	void FillEllipse(int x, int y, int w, int h, float r, float g, float b, float a);
	void DrawRectangle(int x, int y, int w, int h, float r, float g, float b, float a, float strokeWidth);
	void DrawEllipse(int x, int y, int w, int h, float r, float g, float b, float a, float strokeWidth);
	void DrawLine(int x, int y, int x2, int y2, float r, float g, float b, float a, float strokeWidth);
	void Drawtext(std::string text, int x, int y, int w, int h, float r, float g, float b, float a);
private:
	ID2D1Factory* factory;
	ID2D1HwndRenderTarget* rendertarget;
	ID2D1SolidColorBrush* brush;
	IDWriteFactory* pDWriteFactory_;
	IDWriteTextFormat* pTextFormat_;
	std::wstring ToStringW(const std::string& strText);
};
