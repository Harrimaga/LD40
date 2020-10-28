#include "Projectile.h"
#include <math.h>
#include <vector>
#include "Direction.h"
#include <algorithm>

#define PI 3.14159265

Projectile::Projectile(double x, double y, int width, int height, Sprite * sprite, std::vector<Direction*> directions)
{
	this->x = x+width/2;
	this->y = y+height/2;
	this->speed = 0;
	this->dir = 0;
	this->width = width;
	this->height = height;
	this->sprite = sprite;
	this->directions = directions;
}

Projectile::~Projectile()
{
}

void Projectile::Draw() {
	sprite->SetPosition(x, y);
	sprite->SetRotation(dir);
	sprite->Draw();
}

void Projectile::update() {
	double yspeed = speed;
	if(!directions.empty())
	{ 
		dir = directions.at(0)->direction;
		speed = directions.at(0)->speed;
		yspeed = directions.at(0)->yspeed;
		if (directions.at(0)->executed())
		{
			Direction* temp = directions.at(0);
			directions.erase(std::remove(directions.begin(), directions.end(), temp), directions.end());
			delete temp;
		}
	}
	double xd = sin(0.5*dir*PI);
	double yd = -cos(0.5*dir*PI);
	x += xd*speed;
	y += yd*yspeed;
}

void Projectile::setDirection(double direction)
{
	this->dir = direction;
}

bool Projectile::inbounds()
{
	if (x > 40 && x < 840 - width && y > 40 && y < 1040 - height) return true;
	return false;
}
