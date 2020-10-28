#pragma once

#include <wincodec.h>
#include "Graphics.h"

class Sprite
{
public:
	Sprite() {};
	Sprite(wchar_t* filename, Graphics* g);
	Sprite(wchar_t* filename, int x, int y, Graphics* g);
	Sprite(wchar_t* filename, int width, int height, int x, int y, int length, int endWidth, int endHeight, Graphics* g);
	~Sprite();
	void Draw();
	void Drawbg(int at);
	void Draw(int index);
	void SetPosition(int x, int y);
	void SetRotation(double dir);
private:
	ID2D1Bitmap* bmp;
	ID2D1SolidColorBrush* brush;
	int x;
	int y;
	int width;
	int height;
	int length;
	int endW = -1;
	int endH = -1;
	double rotationD = 0;
	Graphics* g;
};

