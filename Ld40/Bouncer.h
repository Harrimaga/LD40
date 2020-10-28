#pragma once
#include "Enemy.h"
#include "BouncingCurve.h"
class Bouncer : public Enemy {
public:
	Bouncer(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(22), x, y, movement)
	{
		attackAmount = 4;
		attackTime = 30;
		spells->push_back(new BouncingCurve());
		timer = attackTime;
		health = 1;
		score = 180;
		w = 32;
		h = 32;
	}; ;
protected:
};