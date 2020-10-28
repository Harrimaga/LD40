#pragma once
#include "Enemy.h"
#include "TestSpell.h"

class TestEnemy: public Enemy {
public:
	TestEnemy(Sprite *sprite, int x, int y, std::vector<Direction*> movement) :Enemy(sprite, x, y, movement) { attackAmount = 25; attackTime = 60; spells->push_back(new TestSpell()); timer = attackTime; health = 1; score = 50; }; ;
protected:
};