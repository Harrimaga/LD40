#pragma once
#include "Enemy.h"
#include "VerticalShot.h"

class WhyYouDoThis : public Enemy {
public:
	WhyYouDoThis(int x, int y, std::vector<Direction*> movement) : Enemy(Globals::sprites->at(2), x, y, movement)
	{
		attackAmount = 135;
		attackTime = 2;
		spells->push_back(new VerticalShot());
		timer = attackTime;
		health = 1;
		score = 100;
	}
};