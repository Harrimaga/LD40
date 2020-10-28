#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"
#include <stdlib.h>

class HailStorm : public Spell
{
public:
	HailStorm() {};
	void Cast(int px, int py, int ex, int ey) override {
		std::vector<Direction*> right = std::vector<Direction*>();
		right.push_back(new Direction(1.8, 4, -1, 0));
		std::vector<Direction*> left = std::vector<Direction*>();
		left.push_back(new Direction(2.2, 4, -1, 0));
		
		Globals::projectiles->push_back(new Projectile(ex - 381, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 341, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 301, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 261, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 221, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 181, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 141, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 101, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 61, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 21, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex + 29, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 69, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 109, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 149, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 189, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 229, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 269, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 309, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 349, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 389, ey - 10, 16, 16, Globals::sprites->at(4), left));

		right = std::vector<Direction*>();
		right.push_back(new Direction(1.6, 4, -1, 0));
		left = std::vector<Direction*>();
		left.push_back(new Direction(2.4, 4, -1, 0));

		Globals::projectiles->push_back(new Projectile(ex - 381, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 341, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 301, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 261, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 221, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 181, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 141, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 101, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 61, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 21, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex + 29, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 69, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 109, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 149, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 189, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 229, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 269, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 309, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 349, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 389, ey - 10, 16, 16, Globals::sprites->at(4), left));

		right = std::vector<Direction*>();
		right.push_back(new Direction(1.4, 4, -1, 0));
		left = std::vector<Direction*>();
		left.push_back(new Direction(2.6, 4, -1, 0));

		Globals::projectiles->push_back(new Projectile(ex - 381, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 341, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 301, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 261, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 221, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 181, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 141, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 101, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 61, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex - 21, ey - 10, 16, 16, Globals::sprites->at(4), right));
		Globals::projectiles->push_back(new Projectile(ex + 29, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 69, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 109, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 149, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 189, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 229, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 269, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 309, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 349, ey - 10, 16, 16, Globals::sprites->at(4), left));
		Globals::projectiles->push_back(new Projectile(ex + 389, ey - 10, 16, 16, Globals::sprites->at(4), left));
	}
};
