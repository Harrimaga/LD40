#include "Level.h"
#include "Globals.h"

Level::Level()
{
}

Level::~Level()
{
}

void Level::update()
{
	if (at >= times.size()) {
		return;
	}
	while (times.at(at) <= time) {
		Globals::enemies.push_back(enemies.at(at));
		at++;
		if (at >= times.size()) {
			break;
		}
	}
	time++;
}
