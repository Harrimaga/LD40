#pragma once
#include "Spell.h"
#include "Globals.h"
#include "Projectile.h"

class TestSpellPlayer : public Spell
{
public:
	TestSpellPlayer() {};
	void Cast(int px, int py, int ex, int ey) override {
		std::vector<Direction*> d = std::vector<Direction*>();
		d.push_back(new Direction(0, 10, 12, 20, 0.05));
		d.push_back(new Direction(3, 10, 12, 20, 0.05));
		d.push_back(new Direction(0, 10, 12, 20, 0.05));
		d.push_back(new Direction(3, 10, 12, 20, 0.05));
		d.push_back(new Direction(0, 10, 12, 20, 0.05));
		d.push_back(new Direction(3, 10, 12, 20, 0.05));
		d.push_back(new Direction(0, 10, 12, 20, 0.05));
		d.push_back(new Direction(3, 10, 12, 20, 0.05));
		d.push_back(new Direction(0, 10, 12, 20, 0.05));
		d.push_back(new Direction(3, 10, 12, 20, 0.05));
		d.push_back(new Direction(0, 10, 12, 20, 0.05));
		d.push_back(new Direction(3, 10, 12, 20, 0.05));
		d.push_back(new Direction(0, 10, 12, 20, 0.05));
		d.push_back(new Direction(3, 10, 12, 20, 0.05));
		d.push_back(new Direction(0, 10, 12, 20, 0));

		Globals::playerProjectiles->push_back(new Projectile(ex, ey + 10, 16, 16, Globals::sprites->at(1), d));
	};
};