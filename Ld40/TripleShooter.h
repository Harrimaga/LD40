#pragma once
#include "Enemy.h"
#include "TripleEnemyShot.h"
class TripleShooter : public Enemy {
public:
	TripleShooter(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(21), x, y, movement)
	{
		attackAmount = 7;
		attackTime = 24;
		spells->push_back(new TripleEnemyShot());
		timer = attackTime;
		health = 1;
		score = 125;
		w = 32;
		h = 32;
	}; ;
protected:
};