#pragma once
#include "Spell.h"
#include <vector>
#include "Globals.h"
#include <math.h>
#define PI 3.14159265

class HolyCross : public Spell
{
public:
	HolyCross() {};
	void Cast(int px, int py, int ex, int ey) override {
		

		std::vector<Direction*> d = std::vector<Direction*>();
		d.push_back(new Direction(1, 3.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex-100, ey-100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 20, 0), new Direction(2.5,3.5,-1,0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 30, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 40, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 50, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 60, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 70, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 80, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 90, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 100, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 110, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 120, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 130, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 140, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 150, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 160, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 170, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 180, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 190, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(1.5, 5, 200, 0), new Direction(2.5, 3.5, -1, 0)}));

		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 20, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 30, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 40, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 50, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 60, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 70, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 80, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 90, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 100, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 110, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 120, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 130, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 140, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 150, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 160, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 170, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 180, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 190, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(2.5, 5, 200, 0), new Direction(1.5, 3.5, -1, 0)}));

		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0,0,50,0),new Direction(1.5, 5, 20, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 30, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 40, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 50, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 60, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 70, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 80, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 90, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 100, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 110, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 120, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 130, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 140, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 150, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 160, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 170, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 180, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 190, 0), new Direction(2.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex - 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(1.5, 5, 200, 0), new Direction(2.5, 3.5, -1, 0)}));

		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 20, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 30, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 40, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 50, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 60, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 70, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 80, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 90, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 100, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 110, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 120, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 130, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 140, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 150, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 160, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 170, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 180, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 190, 0), new Direction(1.5, 3.5, -1, 0)}));
		Globals::projectiles->push_back(new Projectile(ex + 100, ey - 100, 16, 16, Globals::sprites->at(8), std::vector<Direction*> {new Direction(0, 0, 50, 0), new Direction(2.5, 5, 200, 0), new Direction(1.5, 3.5, -1, 0)}));
	}
};