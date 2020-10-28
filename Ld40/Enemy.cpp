#include "Enemy.h"
#include <random>
#include <algorithm>
#define PI 3.14159265

Enemy::Enemy(Sprite *sprite, int x, int y, std::vector<Direction*> movement)
{
	this->sprite = sprite;
	this->x = x;
	this->y = y;
	this->movement = movement;
}

void Enemy::Draw()
{
	move();
	sprite->SetPosition(x, y);
	sprite->SetRotation(0);
	sprite->Draw();
}

void Enemy::Attack(int x, int y)
{
	if (timer > 0) {
		timer--;
	}
	else if(attackAmount != 0) {
		timer = attackTime;
		attackAmount--;
		int r = rand() % spells->size();
		spells->at(r)->Cast(x, y, this->x, this->y);
	}
}

void Enemy::move()
{
	if (!movement.empty())
	{
		dir = movement.at(0)->direction;
		speed = movement.at(0)->speed;
		if (movement.at(0)->executed())
		{
			Direction* temp = movement.at(0);
			movement.erase(std::remove(movement.begin(), movement.end(), temp), movement.end());
			delete temp;
		}
	}
	double xd = sin(0.5*dir*PI);
	double yd = -cos(0.5*dir*PI);
	x += xd*speed;
	y += yd*speed;
}

void Enemy::improve()
{
	health *= 1 + (score / 20000);
}
