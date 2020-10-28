#pragma once
#include "Sprite.h"
#include <vector>
#include "Spell.h"
#include "Direction.h"

class Enemy {

public:
	Enemy(Sprite *sprite, int x, int y, std::vector<Direction*> movement);
	void Draw();
	void Attack(int x,int y);
	double x, y;
	int attackTime;
	int attackAmount;
	void move();
	void improve();
	int health;
	int w = 32, h = 32;
	int score;
protected:
	std::vector<Spell*>* spells = new std::vector<Spell*>();
	std::vector<Direction*> movement;
	Sprite *sprite = nullptr;
	int timer = 0;
	double dir, speed;

};