#pragma once
#include "Enemy.h"
#include "HailStorm.h"
#include "DeathlyFlower.h"
#include "LavaRain.h"
#include "HolyCross.h"
class TestBoss : public Enemy {
public:
	TestBoss(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(2), x, y, movement)
	{
		attackAmount = -1;
		attackTime = 210;
		spells->push_back(new HailStorm());
		spells->push_back(new DeathlyFlower());
		spells->push_back(new LavaRain());
		spells->push_back(new HolyCross());
		timer = attackTime;
		health = 250;
		score = 5000;
	};
protected:
}; 