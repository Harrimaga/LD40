#pragma once
#include "Enemy.h"
#include "CircleShot.h"
class SpikeBall : public Enemy {
public:
	SpikeBall(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(10), x, y, movement)
	{
		attackAmount = 1;
		attackTime = 60;
		spells->push_back(new CircleShot());
		timer = attackTime;
		health = 1;
		score = 65;
		w = 64;
		h = 64;
	}; ;
protected:
};