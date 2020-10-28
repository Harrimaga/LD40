#pragma once
#include "Spell.h"
#include <vector>
#include "Globals.h"
#include <math.h>
#include <random>
#define PI 3.14159265

class MagmaSpray : public Spell
{
public:
	MagmaSpray() {};
	void Cast(int px, int py, int ex, int ey) override {
		
		std::vector<Direction*> d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d));
		d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d));
		d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d));
		d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand()%80*0.025)+1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d));
		d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d));
		d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d));
		d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey, 16, 16, Globals::sprites->at(5), d)); d = std::vector<Direction*>();
		d.push_back(new Direction((rand() % 20 * 0.1) + 1, rand() % 20 * 0.1 + 1.5, -1, 0));
	}
};