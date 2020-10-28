#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"
#include <stdlib.h>
#define PI 3.14159265

class ThunderStorm : public Spell {
public:
	ThunderStorm() {};
	void Cast(int px, int py, int ex, int ey) override {
		double x = abs(ex - px);
		double y = abs(ey - py);
		double angle;
		if (ex - px > 0)
		{
			if (ey - py < 0)
			{
				angle = ((atan(x / y) / PI) * 2) + 2;
			}
			else
			{
				angle = ((atan(y / x) / PI) * 2) + 3;
			}

		}
		else {
			if (ey - py < 0)
			{
				angle = ((atan(y / x) / PI) * 2) + 1;
			}
			else
			{
				angle = ((atan(x / y) / PI) * 2);
			}

		}
		for (int i = 0; i < 30; i++) {
			Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(14), std::vector<Direction*> {new Direction(angle - 0.1 + rand() * 0.2 / RAND_MAX, 4+ rand()*2.0/RAND_MAX, -1, 0)}));
		}
	}
};