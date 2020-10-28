#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"

class VerticalShot : public Spell
{
public:
	VerticalShot() {};
	void Cast(int px, int py, int ex, int ey) override {
		std::vector<Direction*> d = std::vector<Direction*>();

		if (px > ex) {
			d.push_back(new Direction(1, 10, -1, 0));
		}
		else {
			d.push_back(new Direction(3, 10, -1, 0));
		}

		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(1), d));
	};
};