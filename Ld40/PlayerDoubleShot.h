#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"

class PlayerDoubleShot : public Spell
{
public:
	PlayerDoubleShot() {};
	void Cast(int px, int py, int ex, int ey) override {
		Globals::playerProjectiles->push_back(new Projectile(ex - 13, ey - 30, 16, 16, Globals::sprites->at(1), std::vector<Direction*> {new Direction(0, 8, -1, 0)}));
		Globals::playerProjectiles->push_back(new Projectile(ex + 7, ey - 30, 16, 16, Globals::sprites->at(1), std::vector<Direction*> {new Direction(0, 8, -1, 0)}));
	}
};
