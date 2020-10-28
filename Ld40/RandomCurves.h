#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"
#include <stdlib.h>

class RandomCurves : public Spell {
public:
	RandomCurves() {};
	void Cast(int px, int py, int ex, int ey) override { 
		for (int i = 0; i < 75; i++) {                                    
			Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(15), std::vector<Direction*> {new Direction(((double)rand())*4/RAND_MAX, 2.75, 60, 0), new Direction(((double)rand()) * 4 / RAND_MAX, 2.75, 60, ((double)rand()) * 0.05 / RAND_MAX - 0.025)}));
		}
	}
};
