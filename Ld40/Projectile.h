#pragma once
#include "Sprite.h"
#include <vector>
#include "Direction.h"

class Projectile
{
public:
	Projectile(double x, double y, int width, int height, Sprite* sprite, std::vector<Direction*> directions);
	~Projectile();
	void Draw();
	void update();
	void setDirection(double direction);
	bool inbounds();
	double x;
	double y;
	double dir;
	int width;
	int height;
private:
	double speed;
	Sprite* sprite;
	std::vector<Direction*> directions;
};

