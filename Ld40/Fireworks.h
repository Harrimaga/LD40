#pragma once
#include "Spell.h"
#include <vector>
#include "Globals.h"
#include <math.h>
#define PI 3.14159265

class FireWorks : public Spell
{
public:
	FireWorks() {};
	void Cast(int px, int py, int ex, int ey) override
	{
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
		Globals::projectiles->push_back(new Projectile(ex, ey, 32, 32, Globals::sprites->at(18), std::vector<Direction*> {new Direction(2, 1.5, 90, 0), new Direction((rand() % 160 * 0.025), rand() % 20 * 0.1 + 2.5, -1, 0) }));
	}
};