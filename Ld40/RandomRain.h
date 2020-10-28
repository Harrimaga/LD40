#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"
#include <stdlib.h>

class RandomRain : public Spell {
public:
	RandomRain() {};
	void Cast(int px, int py, int ex, int ey) override {
		for (int i = 0; i < 20; i++) {
			Globals::projectiles->push_back(new Projectile(40 + 40*i, 70, 16, 16, Globals::sprites->at(4), std::vector<Direction*> {new Direction(2, 0, 30+rand()%300, 0), new Direction(2, 3.5, -1, -0.0025)}));
		}
	}
};