#pragma once
#include "Level.h"
#include "TestEnemy.h"
#include "TestBoss.h"
#include "Slimer.h"
#include "SpikeBall.h"
#include "Globals.h"
#include "RNGFucker.h"
#include "TripleShooter.h"
#include "RCurves.h"
#include "Bouncer.h"
#include "Arcanist.h"
#include "TheDestructor.h"

class TheDestruction : public Level
{
public:
	TheDestruction()
	{
		background = new Sprite(L"BattleBackGround2.png", 800, 8196, 40, 40, 1, 800, 1000, Globals::g);
		bossbackground = new Sprite(L"BossBackground2.png", 800, 1000, 40, 40, 1, 800, 1000, Globals::g);
		times = std::vector<int>();
		enemies = std::vector<Enemy*>();
		//0
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				enemies.push_back(new SpikeBall(65 + 320 * i, 60 + 200 * j, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
				times.push_back(10 + (j+i*3) * 5);
			}
		}
		//45
		for (int i = 0; i < 4; i++) {
			enemies.push_back(new RNGFucker(65, 65, std::vector<Direction*> { new Direction(1.5, 3, -1, -0.005)}));
			times.push_back(200 + i * 200);
			enemies.push_back(new RNGFucker(795, 65, std::vector<Direction*> { new Direction(2.5, 3, -1, 0.005)}));
			times.push_back(300 + i * 200);
		}
		//1100
		for (int i = 0; i < 20; i++) {
			enemies.push_back(new TripleShooter(65, 165, std::vector<Direction*> { new Direction(1, 6, 115, 0), new Direction(2.75, 7, 80, 0.0035), new Direction(0, 5, -1, 0)}));
			times.push_back(1300 + i*40);
			enemies.push_back(new TripleShooter(795, 165, std::vector<Direction*> { new Direction(3, 6, 115, 0), new Direction(1.75, 7, 80, -0.0035), new Direction(0, 5, -1, 0)}));
			times.push_back(1320 + i * 40);
		}
		//2100
		enemies.push_back(new RCurves(420, 400, std::vector<Direction*> { new Direction(0, 0.5, -1, 0)}));
		times.push_back(2160);
		enemies.push_back(new RCurves(120, 400, std::vector<Direction*> { new Direction(0, 0.5, -1, 0)}));
		times.push_back(2160);
		enemies.push_back(new RCurves(760, 400, std::vector<Direction*> { new Direction(0, 0.5, -1, 0)}));
		times.push_back(2160);
		enemies.push_back(new RNGFucker(65, 165, std::vector<Direction*> { new Direction(1, 3, -1, 0)}));
		times.push_back(2220);
		enemies.push_back(new RNGFucker(795, 165, std::vector<Direction*> { new Direction(2.5, 3, -1, 0)}));
		times.push_back(2200);
		enemies.push_back(new SpikeBall(300, 400, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
		times.push_back(2230);
		enemies.push_back(new SpikeBall(548, 400, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
		times.push_back(2230);
		for (int i = 0; i < 10; i++) {
			enemies.push_back(new TripleShooter(65, 165, std::vector<Direction*> { new Direction(1.1, 5, -1, 0)}));
			times.push_back(2230 + i * 5);
			enemies.push_back(new Slimer(795, 165, std::vector<Direction*> { new Direction(2.9, 5, -1, 0)}));
			times.push_back(2235 + i * 5);
		}
		//2280
		for (int i = 0; i < 10; i++) {
			enemies.push_back(new Bouncer(65 + i*5, 165, std::vector<Direction*> { new Direction(1.5, 4, -1, -0.05)}));
			times.push_back(2660 + i * 40);
			enemies.push_back(new Bouncer(795 - i*5, 165, std::vector<Direction*> { new Direction(2.5, 4, -1, 0.05)}));
			times.push_back(2700 + i * 40);
		}
		//3060
		for (int i = 0; i < 4; i++) {
			enemies.push_back(new RNGFucker(65, 65, std::vector<Direction*> { new Direction(1.5, 3, -1, -0.005)}));
			times.push_back(3060 + i * 150);
			enemies.push_back(new RNGFucker(795, 65, std::vector<Direction*> { new Direction(2.5, 3, -1, 0.005)}));
			times.push_back(3135 + i * 150);
		}
		//3660
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				enemies.push_back(new SpikeBall(65 + 320 * i, 60 + 200 * j, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
				times.push_back(3860 + (j + i * 3) * 5);
			}
		}
		//3905
		for (int i = 0; i < 10; i++) {
			enemies.push_back(new TripleShooter(65, 165, std::vector<Direction*> { new Direction(1, 6, 115, 0), new Direction(2.75, 7, 80, 0.0035), new Direction(0, 5, -1, 0)}));
			times.push_back(4000 + i * 60);
			enemies.push_back(new Bouncer(795, 165, std::vector<Direction*> { new Direction(3, 6, 115, 0), new Direction(1.75, 7, 80, -0.0035), new Direction(0, 5, -1, 0)}));
			times.push_back(4025 + i * 60);
		}
		//4600
		for (int i = 0; i < 3; i++) {
			enemies.push_back(new RNGFucker(65, 65, std::vector<Direction*> { new Direction(1.5, 3, -1, -0.005)}));
			times.push_back(4600 + i * 220);
			enemies.push_back(new RNGFucker(65, 65, std::vector<Direction*> { new Direction(1.5, 3, -1, -0.005)}));
			times.push_back(4600 + i * 220);
			enemies.push_back(new RCurves(420, 400, std::vector<Direction*> { new Direction(0, 0.5, -1, 0)}));
			times.push_back(4660 + i * 220);
			enemies.push_back(new SpikeBall(140, 300, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(4780 + i * 220);
			enemies.push_back(new SpikeBall(676, 300, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(4780 + i * 220);

		}
		//5220
		for (int i = 0; i < 3; i++) {
			enemies.push_back(new Arcanist(100, 100, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(5400 + i * 180);
			enemies.push_back(new Arcanist(300, 100, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(5400 + i * 180);
			enemies.push_back(new Arcanist(500, 100, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(5400 + i * 180);
			enemies.push_back(new Arcanist(700, 100, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(5400 + i * 180);
			enemies.push_back(new Slimer(100, 100, std::vector<Direction*> { new Direction(1, 4, 120, 0), new Direction(1, 4, 16, 0.125), new Direction(3, 4, 100, 0), new Direction(3, 4, 16, -0.125), new Direction(1, 4, -1, 0)}));
			times.push_back(5400 + i * 180);
			enemies.push_back(new Slimer(100, 150, std::vector<Direction*> { new Direction(1, 4, 120, 0), new Direction(1, 4, 16, 0.125), new Direction(3, 4, 100, 0), new Direction(3, 4, 16, -0.125), new Direction(1, 4, -1, 0)}));
			times.push_back(5400 + i * 180);
			enemies.push_back(new Slimer(795, 100, std::vector<Direction*> { new Direction(3, 4, 120, 0), new Direction(3, 4, 16, -0.125), new Direction(1, 4, 100, 0), new Direction(1, 4, 16, 0.125), new Direction(3, 4, -1, 0)}));
			times.push_back(5400 + i * 180);
			enemies.push_back(new Slimer(795, 150, std::vector<Direction*> { new Direction(3, 4, 120, 0), new Direction(3, 4, 16, -0.125), new Direction(1, 4, 100, 0), new Direction(1, 4, 16, 0.125), new Direction(3, 4, -1, 0)}));
			times.push_back(5400 + i * 180);
		}
		//5940
		enemies.push_back(new RCurves(420, 400, std::vector<Direction*> { new Direction(0, 0.5, -1, 0)}));
		times.push_back(6300);
		enemies.push_back(new RCurves(120, 400, std::vector<Direction*> { new Direction(0, 0.5, -1, 0)}));
		times.push_back(6300);
		enemies.push_back(new RCurves(760, 400, std::vector<Direction*> { new Direction(0, 0.5, -1, 0)}));
		times.push_back(6300);
		enemies.push_back(new RNGFucker(65, 165, std::vector<Direction*> { new Direction(1, 3, -1, 0)}));
		times.push_back(6340);
		enemies.push_back(new RNGFucker(795, 165, std::vector<Direction*> { new Direction(2.5, 3, -1, 0)}));
		times.push_back(6340);
		enemies.push_back(new SpikeBall(300, 400, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
		times.push_back(6350);
		enemies.push_back(new SpikeBall(548, 400, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
		times.push_back(6350);
		for (int i = 0; i < 10; i++) {
			enemies.push_back(new TripleShooter(65, 165, std::vector<Direction*> { new Direction(1.1, 5, -1, 0)}));
			times.push_back(6350 + i * 5);
			enemies.push_back(new Slimer(795, 165, std::vector<Direction*> { new Direction(2.9, 5, -1, 0)}));
			times.push_back(6350 + i * 5);
		}
		//6400
		for (int i = 0; i < 8; i++) {
			enemies.push_back(new TripleShooter(65, 165, std::vector<Direction*> { new Direction(1, 6, 115, 0), new Direction(2.75, 7, 80, 0.0035), new Direction(0, 5, -1, 0)}));
			times.push_back(6580 + i * 75);
			enemies.push_back(new Bouncer(795, 165, std::vector<Direction*> { new Direction(3, 6, 115, 0), new Direction(1.75, 7, 80, -0.0035), new Direction(0, 5, -1, 0)}));
			times.push_back(6580 + i * 75);
			enemies.push_back(new SpikeBall(548, 400, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(6580 + i * 75);
		}
		//7180
		for (int i = 0; i < 5; i++) {
			enemies.push_back(new RNGFucker(65, 65, std::vector<Direction*> { new Direction(1.5, 3, -1, -0.005)}));
			times.push_back(7300 + i * 150);
			enemies.push_back(new RNGFucker(795, 65, std::vector<Direction*> { new Direction(2.5, 3, -1, 0.005)}));
			times.push_back(7300 + i * 150);
		}
		//8050
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				enemies.push_back(new SpikeBall(65 + 320 * i, 60 + 200 * j, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
				times.push_back(8400 + (j + i * 3) * 5);
			}
		}
		//8450
		for (int i = 0; i < 2; i++) {
			enemies.push_back(new RCurves(120, 400, std::vector<Direction*> { new Direction(0, 0.5, -1, 0)}));
			times.push_back(8560 + i* 360);
			enemies.push_back(new RCurves(760, 400, std::vector<Direction*> { new Direction(0, 0.5, -1, 0)}));
			times.push_back(8560 + i * 360);
			enemies.push_back(new RNGFucker(65, 165, std::vector<Direction*> { new Direction(1, 3, -1, 0)}));
			times.push_back(8560 + i * 360);
			enemies.push_back(new RNGFucker(795, 165, std::vector<Direction*> { new Direction(2.5, 3, -1, 0)}));
			times.push_back(8560 + i * 360);
			enemies.push_back(new SpikeBall(300, 400, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(8560 + i * 360);
			enemies.push_back(new SpikeBall(548, 400, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(8560 + i * 360);
		}
		//9280
		for (int i = 0; i < 15; i++) {
			enemies.push_back(new TripleShooter(65, 165, std::vector<Direction*> { new Direction(1, 6, 115, 0), new Direction(2.75, 7, 80, 0.0035), new Direction(0, 5, -1, 0)}));
			times.push_back(9340 + i * 30);
			enemies.push_back(new TripleShooter(795, 165, std::vector<Direction*> { new Direction(3, 6, 115, 0), new Direction(1.75, 7, 80, -0.0035), new Direction(0, 5, -1, 0)}));
			times.push_back(9355 + i * 30);
		}
		//9730
		for (int i = 0; i < 10; i++) {
			enemies.push_back(new Bouncer(65 + i * 5, 165, std::vector<Direction*> { new Direction(1.5, 4, -1, -0.05)}));
			times.push_back(9770 + i * 40);
			enemies.push_back(new Bouncer(795 - i * 5, 165, std::vector<Direction*> { new Direction(2.5, 4, -1, 0.05)}));
			times.push_back(9790 + i * 40);
		}
		//10170
		for (int i = 0; i < 3; i++) {
			enemies.push_back(new Arcanist(100, 100, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(10200 + i * 150);
			enemies.push_back(new Arcanist(300, 100, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(10200 + i * 150);
			enemies.push_back(new Arcanist(500, 100, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(10200 + i * 150);
			enemies.push_back(new Arcanist(700, 100, std::vector<Direction*> { new Direction(0, 0, 120, 0), new Direction(0, 5, -1, 0)}));
			times.push_back(10200 + i * 150);
			enemies.push_back(new Slimer(100, 100, std::vector<Direction*> { new Direction(1, 4, 120, 0), new Direction(1, 4, 16, 0.125), new Direction(3, 4, 100, 0), new Direction(3, 4, 16, -0.125), new Direction(1, 4, -1, 0)}));
			times.push_back(10200 + i * 150);
			enemies.push_back(new Slimer(100, 150, std::vector<Direction*> { new Direction(1, 4, 120, 0), new Direction(1, 4, 16, 0.125), new Direction(3, 4, 100, 0), new Direction(3, 4, 16, -0.125), new Direction(1, 4, -1, 0)}));
			times.push_back(10200 + i * 150);
			enemies.push_back(new Slimer(795, 100, std::vector<Direction*> { new Direction(3, 4, 120, 0), new Direction(3, 4, 16, -0.125), new Direction(1, 4, 100, 0), new Direction(1, 4, 16, 0.125), new Direction(3, 4, -1, 0)}));
			times.push_back(10200 + i * 150);
			enemies.push_back(new Slimer(795, 150, std::vector<Direction*> { new Direction(3, 4, 120, 0), new Direction(3, 4, 16, -0.125), new Direction(1, 4, 100, 0), new Direction(1, 4, 16, 0.125), new Direction(3, 4, -1, 0)}));
			times.push_back(10200 + i * 150);
		}
		//10650 now the boss
		enemies.push_back(new TheDestructor(420, 200, std::vector<Direction*> { new Direction(0, 0, -1, 0)}));
		times.push_back(10800);

		Globals::boss = enemies.at(enemies.size()-1);
		Globals::maxbosshealth = Globals::boss->health;
	};
};