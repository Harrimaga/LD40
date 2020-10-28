#include "Globals.h"

std::vector<Projectile*>* Globals::projectiles = new std::vector<Projectile*>();
std::vector<Projectile*>* Globals::playerProjectiles = new std::vector<Projectile*>();
std::vector<Sprite*>* Globals::sprites = new std::vector<Sprite*>();
std::vector<Enemy*> Globals::enemies = std::vector<Enemy*>();
int Globals::ticks = 0;
Enemy* Globals::boss = nullptr;
int Globals::maxbosshealth = 0;
int Globals::score = 0;
Graphics* Globals::g = nullptr;