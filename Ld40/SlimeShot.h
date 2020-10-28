#pragma once
#include "Spell.h"
#include <vector>
#include "Globals.h"
#include <math.h>
#define PI 3.14159265

class SlimeShot : public Spell
{
public:
	SlimeShot(){};
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
		d.push_back(new Direction(angle, 2, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex-40, ey, 16, 16, Globals::sprites->at(8), d));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(8), d));
		Globals::projectiles->push_back(new Projectile(ex+40, ey, 16, 16, Globals::sprites->at(8), d));
	}
};