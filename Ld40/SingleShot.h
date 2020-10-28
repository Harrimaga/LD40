#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"

class SingleShot : public Spell
{
public:
	SingleShot() {};
	void Cast(int px, int py, int ex, int ey) override {
		std::vector<Direction*> d = std::vector<Direction*>();
		d.push_back(new Direction(0, 8, -1, 0));
		Globals::playerProjectiles->push_back(new Projectile(ex-7, ey - 16, 16, 16, Globals::sprites->at(1), d));
	}
};
