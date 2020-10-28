#pragma once

class Direction {
public:
	Direction(double direction, double speed, int time, double curve);
	Direction(double direction, double xspeed, double yspeed, int time, double curve);
	bool executed();
	double direction;
	double speed;
	double yspeed;
	double curve;
private:
	int time;
};