#pragma once
#include "Enemy.h"
#include "RandomCurves.h"
class RCurves : public Enemy {
public:
	RCurves(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(20), x, y, movement)
	{
		attackAmount = 2;
		attackTime = 150;
		spells->push_back(new RandomCurves());
		timer = attackTime;
		health = 1;
		score = 200;
		w = 32;
		h = 32;
	}; ;
protected:
};