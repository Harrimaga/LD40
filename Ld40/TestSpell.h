#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"

class TestSpell : public Spell 
{
public:
	TestSpell() {};
	void Cast(int px, int py, int ex, int ey) override { 
		std::vector<Direction*> d = std::vector<Direction*>();
		d.push_back(new Direction(2, 3, -1, 0));
		Globals::projectiles->push_back(new Projectile(ex, ey + 10, 16, 16, Globals::sprites->at(1), d)); };
};
