#pragma once
#include "Spell.h"
#include <vector>
#include "Globals.h"
#include <math.h>
#define PI 3.14159265

class TripleEnemyShot : public Spell
{
public:
	TripleEnemyShot() {};
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

		std::vector<Direction*> d = std::vector<Direction*>();
		d.push_back(new Direction(angle, 3, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), std::vector<Direction*> { new Direction(angle + 0.5, 3, 40, -0.028), new Direction(angle - 0.5, 3, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), std::vector<Direction*> { new Direction(angle - 0.5, 3, 40, 0.028), new Direction(angle + 0.5, 3, -1, 0) }));
	}
};