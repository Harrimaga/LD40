#pragma once
#include "Enemy.h"
#include "MagmaSpray.h"
class RNGFucker : public Enemy {
public:
	RNGFucker(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(17), x, y, movement)
	{
		attackAmount = 2;
		attackTime = 25;
		spells->push_back(new MagmaSpray());
		timer = attackTime;
		health = 1;
		score = 45;
	}; ;
protected:
};