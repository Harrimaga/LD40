#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"
#include <stdlib.h>

class CircleShot : public Spell {
public:
	CircleShot() {};
	void Cast(int px, int py, int ex, int ey) override {
		for (int i = 0; i < 16; i++) {
			Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(9), std::vector<Direction*> {new Direction(0 + i/4.0, 4.5, -1, 0)}));
		}
		for (int i = 0; i < 16; i++) {
			Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(9), std::vector<Direction*> {new Direction(0.1 + i/4.0, 0, 15, 0), new Direction(0.1 + i / 4.0, 4.5, -1, 0)}));
		}
		for (int i = 0; i < 16; i++) {
			Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(9), std::vector<Direction*> {new Direction(0.2 + i / 4.0, 0, 30, 0), new Direction(0.2 + i / 4.0, 4.5, -1, 0)}));
		}
	}
};
