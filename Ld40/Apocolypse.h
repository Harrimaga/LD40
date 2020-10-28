#pragma once
#include "Level.h"
#include "TestEnemy.h"
#include "TestBoss.h"
#include "Slimer.h"
#include "SpikeBall.h"
#include "Globals.h"
#include "RNGFucker.h"
#include "Assasin.h"
#include "Arcanist.h"
#include <random>

class Apocolypse : public Level
{
public:
	Apocolypse()
	{
		background = new Sprite(L"BattleBackGround.png",800, 8196, 40,40,1,800,1000,Globals::g);
		bossbackground = new Sprite(L"BossBackground1.png", 800, 1000, 40, 40, 1, 800, 1000, Globals::g);
		times = std::vector<int>();
		enemies = std::vector<Enemy*>();
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(20);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(20);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(45);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(45);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(70);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(70);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(95);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(95);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(120);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(120);

		enemies.push_back(new Slimer(60, 80, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(120);
		enemies.push_back(new Slimer(800, 80, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(120);
		enemies.push_back(new Slimer(60, 80, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(140);
		enemies.push_back(new Slimer(800, 80, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(140);
		enemies.push_back(new Slimer(60, 80, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(160);
		enemies.push_back(new Slimer(800, 80, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(160);
		enemies.push_back(new Slimer(60, 80, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(180);
		enemies.push_back(new Slimer(800, 80, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(180);
		enemies.push_back(new Slimer(60, 80, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(200);
		enemies.push_back(new Slimer(800, 80, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(200);

		enemies.push_back(new Slimer(150, 60, std::vector<Direction*> { new Direction(2, 2, 45, 0), new Direction(1, 0, 100, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(450);
		enemies.push_back(new Slimer(350, 60, std::vector<Direction*> { new Direction(2, 2, 45, 0), new Direction(3, 0, 100, -0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(450);
		enemies.push_back(new Slimer(550, 60, std::vector<Direction*> { new Direction(2, 2, 45, 0), new Direction(1, 0, 100, 0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(450);
		enemies.push_back(new Slimer(750, 60, std::vector<Direction*> { new Direction(2, 2, 45, 0), new Direction(3, 0, 100, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(450);

		enemies.push_back(new SpikeBall(60, 200, std::vector<Direction*> { new Direction(1, 2, 60, 0), new Direction(2, 4, -1, 0)}));
		times.push_back(600);
		enemies.push_back(new SpikeBall(800, 100, std::vector<Direction*> { new Direction(3, 2, 60, 0), new Direction(2, 4, -1, 0)}));
		times.push_back(600);
		enemies.push_back(new SpikeBall(60, 350, std::vector<Direction*> { new Direction(1, 2, 60, 0), new Direction(2, 4, -1, 0)}));
		times.push_back(600);
		enemies.push_back(new SpikeBall(60, 275, std::vector<Direction*> { new Direction(1, 2, 60, 0), new Direction(2, 4, -1, 0)}));
		times.push_back(600);
		enemies.push_back(new SpikeBall(800, 400, std::vector<Direction*> { new Direction(3, 2, 60, 0), new Direction(2, 4, -1, 0)}));
		times.push_back(600);

		enemies.push_back(new Slimer(60, 60, std::vector<Direction*> { new Direction(1.6, 3, -1, 0.007)}));
		times.push_back(850);
		enemies.push_back(new Slimer(800, 60, std::vector<Direction*> { new Direction(2.4, 3, -1, -0.007)}));
		times.push_back(850);
		enemies.push_back(new Slimer(160, 60, std::vector<Direction*> { new Direction(1.6, 3, -1, 0.007)}));
		times.push_back(900);
		enemies.push_back(new Slimer(700, 60, std::vector<Direction*> { new Direction(2.4, 3, -1, -0.007)}));
		times.push_back(900);
		enemies.push_back(new SpikeBall(400, 60, std::vector<Direction*> {new Direction(2, 2, 120, 0), new Direction(2,3,-1,0.07)}));
		times.push_back(920);
		enemies.push_back(new SpikeBall(500, 60, std::vector<Direction*> {new Direction(2, 2, 120, 0), new Direction(2,3,-1,0.07)}));
		times.push_back(920);
		enemies.push_back(new Slimer(260, 60, std::vector<Direction*> { new Direction(1.6, 3, -1, 0.007)}));
		times.push_back(950);
		enemies.push_back(new Slimer(600, 60, std::vector<Direction*> { new Direction(2.4, 3, -1, -0.007)}));
		times.push_back(950);

		enemies.push_back(new RNGFucker(200, 200, std::vector<Direction*> { new Direction(0, 0.25, -1, 0)}));
		times.push_back(1350);
		enemies.push_back(new RNGFucker(400, 200, std::vector<Direction*> { new Direction(0, 0.25, -1, 0)}));
		times.push_back(1350);
		enemies.push_back(new RNGFucker(600, 200, std::vector<Direction*> { new Direction(0, 0.25, -1, 0)}));
		times.push_back(1350);

		enemies.push_back(new Slimer(60, 130, std::vector<Direction*> { new Direction(1.6, 3, -1, 0.008)}));
		times.push_back(1550);
		enemies.push_back(new Slimer(800, 130, std::vector<Direction*> { new Direction(2.4, 3, -1, -0.008)}));
		times.push_back(1550);
		enemies.push_back(new RNGFucker(430, 60, std::vector<Direction*> { new Direction(2, 2, -1, 0.06)}));
		times.push_back(1600);

		enemies.push_back(new Slimer(740, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2,3,-1,-0.02)}));
		times.push_back(1850);
		enemies.push_back(new Slimer(810, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2,3,-1,-0.02)}));
		times.push_back(1860);
		enemies.push_back(new Slimer(760, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2,3,-1,-0.02)}));
		times.push_back(1870);
		enemies.push_back(new Slimer(750, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2,3,-1,-0.02)}));
		times.push_back(1880);
		enemies.push_back(new Slimer(800, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2,3,-1,-0.02)}));
		times.push_back(1890);
		enemies.push_back(new Slimer(690, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2,3,-1,-0.02)}));
		times.push_back(1900);
		enemies.push_back(new Slimer(765, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2,3,-1,-0.02)}));
		times.push_back(1910);
		enemies.push_back(new Slimer(700, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2,3,-1,-0.02)}));
		times.push_back(1920);

		enemies.push_back(new Slimer(120, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(1950);
		enemies.push_back(new Slimer(220, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(1960);
		enemies.push_back(new Slimer(100, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(1970);
		enemies.push_back(new Slimer(150, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(1980);
		enemies.push_back(new Slimer(225, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(1990);
		enemies.push_back(new Slimer(85, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(2000);
		enemies.push_back(new Slimer(105, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(2010);
		enemies.push_back(new Slimer(170, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(2020);

		enemies.push_back(new Assasin(60, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(3, 3, -1, 0.02)}));
		times.push_back(2200); 
		enemies.push_back(new Assasin(60, 90, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(3, 3, -1, 0.02)}));
		times.push_back(2200); 
		enemies.push_back(new Assasin(60, 120, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(3, 3, -1, 0.02)}));
		times.push_back(2200); 
		enemies.push_back(new Assasin(60, 150, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(3, 3, -1, 0.02)}));
		times.push_back(2200);

		enemies.push_back(new Assasin(800, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(2200);
		enemies.push_back(new Assasin(800, 90, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(2200);
		enemies.push_back(new Assasin(800, 120, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(2200);
		enemies.push_back(new Assasin(800, 150, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(2200);

		enemies.push_back(new RNGFucker(60, 60, std::vector<Direction*> { new Direction(1.5, 4, -1, 0.008)}));
		times.push_back(2350);
		enemies.push_back(new RNGFucker(800, 60, std::vector<Direction*> { new Direction(2.5, 4, -1, -0.008)}));
		times.push_back(2350);
		enemies.push_back(new Assasin(60, 60, std::vector<Direction*> {new Direction(1.4, 3, -1, 0.007)}));
		times.push_back(2400);
		enemies.push_back(new Assasin(60, 60, std::vector<Direction*> {new Direction(1.6, 3, -1, -0.007)}));
		times.push_back(2400);
		enemies.push_back(new Assasin(800, 60, std::vector<Direction*> {new Direction(2.4, 3, -1, 0.007)}));
		times.push_back(2400);
		enemies.push_back(new Assasin(800, 60, std::vector<Direction*> {new Direction(2.6, 3, -1, -0.007)}));
		times.push_back(2400);

		enemies.push_back(new SpikeBall(400, 60, std::vector<Direction*> {new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.07)}));
		times.push_back(2600);
		enemies.push_back(new SpikeBall(500, 60, std::vector<Direction*> {new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.07)}));
		times.push_back(2600);
		enemies.push_back(new SpikeBall(400, 60, std::vector<Direction*> {new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.07)}));
		times.push_back(2700);
		enemies.push_back(new SpikeBall(500, 60, std::vector<Direction*> {new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.07)}));
		times.push_back(2700);
		enemies.push_back(new RNGFucker(430, 60, std::vector<Direction*> { new Direction(2, 3, 60, 0), new Direction(0, 6, -1, 0)}));
		times.push_back(2850);

		//Prepare Uranus

		//WELCOME TO THE MINEFIELD YOU MOTHERFUCKER
		enemies.push_back(new SpikeBall(200, 325, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(490, 110, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(280, 360, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(800, 200, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(640, 310, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(330, 120, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(440, 505, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(700, 60, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(60, 330, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(100, 400, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new SpikeBall(140, 110, std::vector<Direction*> {new Direction(2, 0, 120, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(3200);
		enemies.push_back(new RNGFucker(60, 60, std::vector<Direction*> { new Direction(2, 5, -1, -0.03)}));
		times.push_back(3350);
		enemies.push_back(new RNGFucker(800, 60, std::vector<Direction*> { new Direction(2, 5, -1, 0.03)}));
		times.push_back(3350);
		//Well I tried ;-;

		enemies.push_back(new Slimer(740, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, -0.02)}));
		times.push_back(3600);
		enemies.push_back(new Slimer(810, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, -0.02)}));
		times.push_back(3610);
		enemies.push_back(new Slimer(760, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, -0.02)}));
		times.push_back(3620);
		enemies.push_back(new Slimer(750, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, -0.02)}));
		times.push_back(3630);
		enemies.push_back(new Slimer(800, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, -0.02)}));
		times.push_back(3640);
		enemies.push_back(new Slimer(690, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, -0.02)}));
		times.push_back(3650);
		enemies.push_back(new Slimer(765, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, -0.02)}));
		times.push_back(3660);
		enemies.push_back(new Slimer(700, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, -0.02)}));
		times.push_back(3670);

		enemies.push_back(new Slimer(120, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(3680);
		enemies.push_back(new Slimer(220, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(3690);
		enemies.push_back(new Slimer(100, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(3700);
		enemies.push_back(new Slimer(150, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(3710);
		enemies.push_back(new Slimer(225, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(3720);
		enemies.push_back(new Slimer(85, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(3730);
		enemies.push_back(new Slimer(105, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(3740);
		enemies.push_back(new Slimer(170, 60, std::vector<Direction*> { new Direction(2, 2, 120, 0), new Direction(2, 3, -1, 0.02)}));
		times.push_back(3750);

		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(3850);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(3850);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(3900);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(3900);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(3950);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(3950);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(4000);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(4000);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(4050);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(4050);

		enemies.push_back(new Arcanist(60, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(4300);
		enemies.push_back(new Arcanist(260, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(4300);
		enemies.push_back(new Arcanist(430, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(4300);
		enemies.push_back(new Arcanist(620, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(4300);
		enemies.push_back(new Arcanist(820, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(4300);

		enemies.push_back(new RNGFucker(60, 60, std::vector<Direction*> { new Direction(2, 5, -1, -0.03)}));
		times.push_back(4600);
		enemies.push_back(new RNGFucker(800, 60, std::vector<Direction*> { new Direction(2, 5, -1, 0.03)}));
		times.push_back(4600);
		enemies.push_back(new Arcanist(230, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(4600);
		enemies.push_back(new Arcanist(630, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(4600);

		enemies.push_back(new Assasin(60, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(3, 3, -1, 0.02)}));
		times.push_back(4800);
		enemies.push_back(new Assasin(60, 90, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(3, 3, -1, 0.02)}));
		times.push_back(4800);
		enemies.push_back(new Assasin(60, 120, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(3, 3, -1, 0.02)}));
		times.push_back(4800);
		enemies.push_back(new Assasin(60, 150, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(3, 3, -1, 0.02)}));
		times.push_back(4800);

		enemies.push_back(new Assasin(800, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(4800);
		enemies.push_back(new Assasin(800, 90, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(4800);
		enemies.push_back(new Assasin(800, 120, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(4800);
		enemies.push_back(new Assasin(800, 150, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(4800);

		enemies.push_back(new SpikeBall(60, 120, std::vector<Direction*> {new Direction(1, 2, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5250);
		enemies.push_back(new SpikeBall(60, 180, std::vector<Direction*> {new Direction(1, 2.5, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5250);
		enemies.push_back(new SpikeBall(760, 120, std::vector<Direction*> {new Direction(3, 2, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5250);
		enemies.push_back(new SpikeBall(760, 180, std::vector<Direction*> {new Direction(3, 2.5, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5250);
		enemies.push_back(new RNGFucker(430, 60, std::vector<Direction*> { new Direction(2, 2, 90, 0), new Direction(0, 3, -1, 0)}));
		times.push_back(5300);
		enemies.push_back(new Arcanist(230, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(5300);
		enemies.push_back(new Arcanist(630, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(5300);

		enemies.push_back(new SpikeBall(60, 60, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5700);
		enemies.push_back(new SpikeBall(150, 150, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5750);
		enemies.push_back(new SpikeBall(240, 240, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5800);
		enemies.push_back(new SpikeBall(330, 330, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5850);
		enemies.push_back(new SpikeBall(420, 420, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5900);
		enemies.push_back(new SpikeBall(510, 510, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(5950);
		enemies.push_back(new SpikeBall(600, 600, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(6000);
		enemies.push_back(new SpikeBall(690, 690, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(6050);
		enemies.push_back(new SpikeBall(780, 780, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(6100);

		enemies.push_back(new Assasin(100, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(6300);
		enemies.push_back(new Assasin(225, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(6300);
		enemies.push_back(new Assasin(350, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(6300);
		enemies.push_back(new Assasin(475, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(6300);
		enemies.push_back(new Assasin(600, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(6300);
		enemies.push_back(new Assasin(725, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(1, 3, -1, 0.02)}));
		times.push_back(6300);

		enemies.push_back(new Arcanist(270, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(6500);
		enemies.push_back(new Arcanist(470, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(6500);
		enemies.push_back(new Arcanist(670, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(6500);
		enemies.push_back(new Arcanist(570, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(6525);
		enemies.push_back(new Arcanist(370, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(6525);
		enemies.push_back(new Arcanist(170, 60, std::vector<Direction*> { new Direction(2, 2, 50, 0), new Direction(0, 0, 120, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(6525);

		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(6650);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(6650);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(6675);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(6675);
		enemies.push_back(new Assasin(60, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(0, 3, -1, 0.02)}));
		times.push_back(6725);
		enemies.push_back(new Assasin(800, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(0, 3, -1, 0.02)}));
		times.push_back(6725);
		enemies.push_back(new SpikeBall(300, 300, std::vector<Direction*> { new Direction(1, 0, 60, 0), new Direction(2, 4, -1, 0)}));
		times.push_back(6850);
		enemies.push_back(new SpikeBall(500, 300, std::vector<Direction*> { new Direction(3, 0, 60, 0), new Direction(2, 4, -1, 0)}));
		times.push_back(6850);

		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 0, 120, 0), new Direction(0, 3, 40, 0) }));
		times.push_back(7250);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(7250);
		enemies.push_back(new Slimer(160, 150, std::vector<Direction*> { new Direction(1, 0, 120, 0), new Direction(0, 3, 40, 0) }));
		times.push_back(7275);
		enemies.push_back(new Slimer(700, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(7275);
		enemies.push_back(new Slimer(260, 150, std::vector<Direction*> { new Direction(1, 0, 120, 0), new Direction(0, 3, 40, 0) }));
		times.push_back(7300);
		enemies.push_back(new Slimer(600, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(7300);
		enemies.push_back(new Slimer(360, 150, std::vector<Direction*> { new Direction(1, 0, 120, 0), new Direction(0, 3, 40, 0) }));
		times.push_back(7325);
		enemies.push_back(new Slimer(500, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(7325);
		enemies.push_back(new Slimer(430, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(7350);

		enemies.push_back(new RNGFucker(60, 120, std::vector<Direction*> { new Direction(1, 6, -1, 0)}));
		times.push_back(7700);
		enemies.push_back(new RNGFucker(800, 160, std::vector<Direction*> { new Direction(3, 6, -1, 0)}));
		times.push_back(7700);
		enemies.push_back(new RNGFucker(60, 200, std::vector<Direction*> { new Direction(1, 6.5, -1, 0)}));
		times.push_back(7750);
		enemies.push_back(new RNGFucker(800, 240, std::vector<Direction*> { new Direction(3, 6.5, -1, 0)}));
		times.push_back(7750);
		enemies.push_back(new RNGFucker(60, 280, std::vector<Direction*> { new Direction(1, 7, -1, 0)}));
		times.push_back(7800);
		enemies.push_back(new RNGFucker(800, 320, std::vector<Direction*> { new Direction(3, 7, -1, 0)}));
		times.push_back(7800);

		enemies.push_back(new SpikeBall(100, 60, std::vector<Direction*> {new Direction(2, 2, -1, 0)}));
		times.push_back(8200);
		enemies.push_back(new SpikeBall(100, 60, std::vector<Direction*> {new Direction(2, 3.5, -1, 0)}));
		times.push_back(8200);
		enemies.push_back(new SpikeBall(100, 60, std::vector<Direction*> {new Direction(2, 5, -1, 0)}));
		times.push_back(8200);
		enemies.push_back(new SpikeBall(100, 60, std::vector<Direction*> {new Direction(2, 6.5, -1, 0)}));
		times.push_back(8200);
		enemies.push_back(new SpikeBall(100, 60, std::vector<Direction*> {new Direction(2, 8, -1, 0)}));
		times.push_back(8200);

		enemies.push_back(new SpikeBall(780, 60, std::vector<Direction*> {new Direction(2, 2, -1, 0)}));
		times.push_back(8200);
		enemies.push_back(new SpikeBall(780, 60, std::vector<Direction*> {new Direction(2, 3.5, -1, 0)}));
		times.push_back(8200);
		enemies.push_back(new SpikeBall(780, 60, std::vector<Direction*> {new Direction(2, 5, -1, 0)}));
		times.push_back(8200);
		enemies.push_back(new SpikeBall(780, 60, std::vector<Direction*> {new Direction(2, 6.5, -1, 0)}));
		times.push_back(8200);
		enemies.push_back(new SpikeBall(780, 60, std::vector<Direction*> {new Direction(2, 8, -1, 0)}));
		times.push_back(8200);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 0, 120, 0), new Direction(0, 3, 40, 0) }));
		times.push_back(8350);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(8350);
		enemies.push_back(new Slimer(160, 150, std::vector<Direction*> { new Direction(1, 0, 120, 0), new Direction(0, 3, 40, 0) }));
		times.push_back(8350);
		enemies.push_back(new Slimer(700, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(8350);
		enemies.push_back(new Slimer(260, 150, std::vector<Direction*> { new Direction(1, 0, 120, 0), new Direction(0, 3, 40, 0) }));
		times.push_back(8350);
		enemies.push_back(new Slimer(600, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(8350);
		enemies.push_back(new Slimer(360, 150, std::vector<Direction*> { new Direction(1, 0, 120, 0), new Direction(0, 3, 40, 0) }));
		times.push_back(8350);
		enemies.push_back(new Slimer(500, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(8350);
		enemies.push_back(new Slimer(430, 150, std::vector<Direction*> { new Direction(3, 0, 120, 0), new Direction(0, 3, 40, -0) }));
		times.push_back(8350);

		enemies.push_back(new RNGFucker(60, 120, std::vector<Direction*> { new Direction(1, 6, -1, 0)}));
		times.push_back(8550);
		enemies.push_back(new RNGFucker(800, 160, std::vector<Direction*> { new Direction(3, 6, -1, 0)}));
		times.push_back(8550);
		enemies.push_back(new RNGFucker(60, 200, std::vector<Direction*> { new Direction(1, 6.5, -1, 0)}));
		times.push_back(8600);
		enemies.push_back(new RNGFucker(800, 240, std::vector<Direction*> { new Direction(3, 6.5, -1, 0)}));
		times.push_back(8600);
		enemies.push_back(new RNGFucker(60, 280, std::vector<Direction*> { new Direction(1, 7, -1, 0)}));
		times.push_back(8650);
		enemies.push_back(new RNGFucker(800, 320, std::vector<Direction*> { new Direction(3, 7, -1, 0)}));
		times.push_back(8650);

		enemies.push_back(new Arcanist(270, 160, std::vector<Direction*> { new Direction(2, 0, 50, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(8800);
		enemies.push_back(new Arcanist(470, 160, std::vector<Direction*> { new Direction(2, 0, 50, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(8800);
		enemies.push_back(new Arcanist(670, 160, std::vector<Direction*> { new Direction(2, 0, 50, 0), new Direction(0, 4, -1, 0) }));
		times.push_back(8800);
		enemies.push_back(new Assasin(60, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(0, 3, -1, 0)}));
		times.push_back(8850);
		enemies.push_back(new Assasin(800, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(0, 3, -1, 0)}));
		times.push_back(8850);
		enemies.push_back(new Assasin(160, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(0, 3, -1, 0)}));
		times.push_back(8850);
		enemies.push_back(new Assasin(700, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(0, 3, -1, 0)}));
		times.push_back(8850);
		enemies.push_back(new Assasin(260, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(0, 3, -1, 0)}));
		times.push_back(8850);
		enemies.push_back(new Assasin(600, 60, std::vector<Direction*> { new Direction(2, 0, 120, 0), new Direction(0, 3, -1, 0)}));
		times.push_back(8850);

		enemies.push_back(new SpikeBall(60, 780, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(9150);
		enemies.push_back(new SpikeBall(150, 690, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(9200);
		enemies.push_back(new SpikeBall(240, 600, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(9250);
		enemies.push_back(new SpikeBall(330, 510, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(9300);
		enemies.push_back(new SpikeBall(420, 420, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(9350);
		enemies.push_back(new SpikeBall(510, 330, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(9400);
		enemies.push_back(new SpikeBall(600, 240, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(9450);
		enemies.push_back(new SpikeBall(690, 150, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(9500);
		enemies.push_back(new SpikeBall(780, 60, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(9550);

		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(9700);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(9700);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(9740);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(9740);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(9780);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(9780);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(9820);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(9820);
		enemies.push_back(new Slimer(60, 150, std::vector<Direction*> { new Direction(1, 2, 120, 0), new Direction(1, 3, 40, 0.05), new Direction(3, 2, -1, 0) }));
		times.push_back(9860);
		enemies.push_back(new Slimer(800, 150, std::vector<Direction*> { new Direction(3, 2, 120, 0), new Direction(3, 3, 40, -0.05), new Direction(1, 2, -1, 0) }));
		times.push_back(9860);

		enemies.push_back(new RNGFucker(60, 120, std::vector<Direction*> { new Direction(1, 6, -1, 0)}));
		times.push_back(10000);
		enemies.push_back(new RNGFucker(800, 160, std::vector<Direction*> { new Direction(3, 6, -1, 0)}));
		times.push_back(10000);
		enemies.push_back(new SpikeBall(430, 230, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(10100);
		enemies.push_back(new SpikeBall(430, 230, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(10200);
		enemies.push_back(new SpikeBall(430, 230, std::vector<Direction*> {new Direction(1, 0, 60, 0), new Direction(2, 3, -1, 0)}));
		times.push_back(10300);

		//Boss Fight down here after 10800 ticks

		std::vector<Direction*> mp = std::vector<Direction*>();
		for (int i = 0; i < 400; i++)
		{
			int a = rand() % 4;
			switch (a)
			{
			case 0:
				mp.push_back(new Direction(0, 0, 180, 0));
			case 1:
				mp.push_back(new Direction(1, 1, 180, 0.005));
				mp.push_back(new Direction(3, 1, 180, 0.005));
			case 2:
				mp.push_back(new Direction(3, 1, 180, -0.005));
				mp.push_back(new Direction(1, 1, 180, -0.005));
			case 3:
				mp.push_back(new Direction(1.5, .5, 90, -0));
				mp.push_back(new Direction(3, .5, 90, -0));
				mp.push_back(new Direction(.5, .5, 90, -0));
			}

			
		}
		enemies.push_back(new TestBoss(430, 160, mp));
		times.push_back(10800);

		Globals::boss = enemies.at(enemies.size()-1);
		Globals::maxbosshealth = Globals::boss->health;
	};
};