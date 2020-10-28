#pragma once
#include "Enemy.h"
#include "SlimeShot.h"
class Slimer : public Enemy {
public:
	Slimer(int x, int y, std::vector<Direction*> movement) :Enemy(Globals::sprites->at(11), x, y, movement)
	{ 
		attackAmount = 4; 
		attackTime = 45; 
		spells->push_back(new SlimeShot()); 
		timer = attackTime; 
		health = 1; 
		score = 35; }; ;
protected:
};