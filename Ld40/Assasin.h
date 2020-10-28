#pragma once
#include "Enemy.h"
#include "Dagger.h"
class Assasin : public Enemy {
public:
	Assasin(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(16), x, y, movement)
	{
		attackAmount = 4;
		attackTime = 30;
		spells->push_back(new Dagger());
		timer = attackTime;
		health = 1;
		score = 25;
	}; ;
protected:
};