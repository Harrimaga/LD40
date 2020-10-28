#pragma once
#include "Enemy.h"
#include "Globals.h"
#include "BigCircle.h"
#include "RandomRain.h"
#include "ThunderStorm.h"
class TheDestructor : public Enemy {
public:
	TheDestructor(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(2), x, y, movement)
	{
		attackAmount = -1;
		attackTime = 90;
		timer = attackTime;
		spells->push_back(new BigCircle());
		spells->push_back(new RandomRain());
		spells->push_back(new ThunderStorm());
		health = 300;
		score = 15000;
	};
protected:
};