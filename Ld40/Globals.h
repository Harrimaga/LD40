#pragma once

#include <vector>
#include "Projectile.h"
#include "Enemy.h"
#include "Graphics.h"

class Globals
{
public:
	static std::vector<Projectile*>* projectiles;
	static std::vector<Projectile*>* playerProjectiles;
	static std::vector<Sprite*>* sprites;
	static std::vector<Enemy*> enemies;
	static int ticks;
	static Enemy* boss;
	static int maxbosshealth;
	static int score;
	static Graphics* g;
private:
	Globals();
};
