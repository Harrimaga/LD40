#pragma once
#include <vector>
#include "Enemy.h"
#include "Sprite.h"

class Level
{
public:
	Level();
	~Level();
	void update();
	std::vector<Enemy*> enemies;
	std::vector<int> times;
	Sprite* background = nullptr;
	Sprite* bossbackground = nullptr;
private:
	int at = 0;
	int time = 0;
};

