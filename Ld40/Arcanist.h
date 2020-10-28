#pragma once
#include "Enemy.h"
#include "FireWorks.h"
#include "FireWorks2.h"
class Arcanist : public Enemy {
public:
	Arcanist(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(2), x, y, movement)
	{
		attackAmount = 2;
		attackTime = 65;
		spells->push_back(new FireWorks());
		spells->push_back(new FireWorks2());
		timer = attackTime;
		health = 1;
		score = 50;
	}; ;
protected:
};