#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"
#include <stdlib.h>

class BigCircle : public Spell {
public:
	BigCircle() {};
	void Cast(int px, int py, int ex, int ey) override {
		for (int i = 0; i < 80; i++) {
			Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(13), std::vector<Direction*> {new Direction(0 + 0.05*i, 3.5, -1, 0.0025)}));
		}
	}
};