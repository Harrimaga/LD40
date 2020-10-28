#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"

class PlayerTripleShot : public Spell
{
public:
	PlayerTripleShot() {};
	void Cast(int px, int py, int ex, int ey) override {
		std::vector<Direction*> d = std::vector<Direction*>();
		d.push_back(new Direction(0, 10, -1, 0));
		std::vector<Direction*> d1 = std::vector<Direction*>();
		d1.push_back(new Direction(3.8, 10, -1, 0));
		std::vector<Direction*> d2 = std::vector<Direction*>();
		d2.push_back(new Direction(0.2, 10, -1, 0));
		Globals::playerProjectiles->push_back(new Projectile(ex -3, ey - 30, 16, 16, Globals::sprites->at(1), d));
		Globals::playerProjectiles->push_back(new Projectile(ex - 27, ey - 25, 16, 16, Globals::sprites->at(1), d1));
		Globals::playerProjectiles->push_back(new Projectile(ex + 21, ey - 25, 16, 16, Globals::sprites->at(1), d2));
	}
};
