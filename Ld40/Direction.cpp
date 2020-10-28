#include "Direction.h"

Direction::Direction(double direction, double speed, int time, double curve)
{
	this->direction = direction;
	this->speed = speed;
	this->yspeed = speed;
	this->time = time;
	this->curve = curve;
}

Direction::Direction(double direction, double xspeed, double yspeed, int time, double curve)
{
	this->direction = direction;
	this->speed = xspeed;
	this->yspeed = yspeed;
	this->time = time;
	this->curve = curve;
}


bool Direction::executed()
{
	time--;
	curve *= .99;
	direction += curve;
	if (direction > 4) {
		direction -= 4;
	}
	else if(direction < 0){
		direction += 4;
	}
	return time == 0;
}