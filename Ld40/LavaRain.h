#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"
#include <stdlib.h>

class LavaRain : public Spell {
public:
	LavaRain() {};
	void Cast(int px, int py, int ex, int ey) override {
		Globals::projectiles->push_back(new Projectile(50, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, -0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(100, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, 0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(150, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, -0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(200, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, 0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(250, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, -0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(300, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, 0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(350, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, -0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(400, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, 0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(450, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, -0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(500, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, 0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(550, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, -0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(600, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, 0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(650, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, -0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(700, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, 0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(750, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, -0.27), new Direction(0, 3, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(800, 50, 16, 16, Globals::sprites->at(5), std::vector<Direction*> {new Direction(2, 5, 190, 0), new Direction(2, 5, 8, 0.27), new Direction(0, 3, -1, 0)}));
	}
};