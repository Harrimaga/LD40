#include <Windows.h>
#include <iostream>
#include <random>
#include <ctime>
#include "Graphics.h"
#include "Sprite.h"
#include "Enemy.h"
#include <vector>
#include "Globals.h"
#include <math.h>
#include "TestSpellPlayer.h"
#include "PlayerTripleShot.h"
#include "SingleShot.h"
#include "Level.h"
#include "Apocolypse.h"
#include "TheDestruction.h"
#include "PlayerDoubleShot.h"
#include <mmsystem.h>
#include <mciapi.h>

#pragma comment(lib, "Winmm.lib")
//Enemies
#include "TestEnemy.h"
#include "TestBoss.h"

#include <algorithm>
#define PI 3.14159265
//8196
bool stop = false, ld = false, rd = false, ud = false, dd = false, even = true, shift = false, sp = false, atboss = false;
int x = 440, y = 1008, atscroll = 0, life = 5, shield = 0, speed = 4, timer = 0, atlvl = 1, shotusing = 1;


std::string getexepath()
{
	char result[MAX_PATH];
	return std::string(result, GetModuleFileName(NULL, result, MAX_PATH));
}

LRESULT CALLBACK WindowProc(_In_ HWND hwnd, _In_ UINT uMsg, _In_ WPARAM wParam, _In_ LPARAM lParam) {
	switch (uMsg) {
	case(WM_DESTROY):
		PostQuitMessage(0);
		stop = true;
		return 0;
		break;

	case(WM_KEYDOWN): //https://msdn.microsoft.com/en-us/library/windows/desktop/dd375731(v=vs.85).aspx for key codes
		switch (wParam) {
		case(VK_ESCAPE):
			PostQuitMessage(0);
			stop = true;
			return 0;
			break;
		case(VK_LEFT):
			ld = true;
			break;
		case(VK_RIGHT):
			rd = true;
			break;
		case(VK_UP):
			ud = true;
			break;
		case(VK_DOWN):
			dd = true;
			break;
		case(VK_SPACE):
			sp = true;
			break;
		case(VK_SHIFT):
			shift = true;
			break;
		case(13):
			if (life < 1) {
				stop = true;
				std::string path = "start " + getexepath();
				system(path.c_str());
			}
			break;
		}
		break;
	case(WM_KEYUP):
		switch (wParam) {
		case(VK_LEFT):
			ld = false;
			break;
		case(VK_RIGHT):
			rd = false;
			break;
		case(VK_UP):
			ud = false;
			break;
		case(VK_DOWN):
			dd = false;
			break;
		case(VK_SPACE):
			sp = false;
			break;
		case(VK_SHIFT):
			shift = false;
			break;
		}
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void GetDesktopResolution(int& horizontal, int& vertical)
{
	RECT desktop;
	const HWND hDesktop = GetDesktopWindow();
	GetWindowRect(hDesktop, &desktop);
	horizontal = desktop.right;
	vertical = desktop.bottom;
}

bool checkHitbox(int x1, int y1, double dir, int width, int height, int x2, int y2, int radius) {
	bool hit = false;
	if (abs(x1 - x2) + abs(y1 - y2) < width * 3) {
		int x1m = x1;
		int y1m = y1;
		int xp1 = x1m + sin(dir*PI / 2) * width / 2;
		int yp1 = y1m - cos(dir*PI / 2) * height / 2;
		int xp2 = x1m + cos(dir*PI / 2) * width / 2;
		int yp2 = y1m - cos(dir*PI / 2) * height / 2;
		int xp3 = x1m + cos(dir*PI / 2) * width / 2;
		int yp3 = y1m + sin(dir*PI / 2) * height / 2;
		int xp4 = x1m + cos(dir*PI / 2) * width / 2;
		int yp4 = y1m + cos(dir*PI / 2) * height / 2;
		int xp5 = x1m - sin(dir*PI / 2) * width / 2;
		int yp5 = y1m + cos(dir*PI / 2) * height / 2;
		int xp6 = x1m - cos(dir*PI / 2) * width / 2;
		int yp6 = y1m + cos(dir*PI / 2) * height / 2;
		int xp7 = x1m - cos(dir*PI / 2) * width / 2;
		int yp7 = y1m - sin(dir*PI / 2) * height / 2;
		int xp8 = x1m - cos(dir*PI / 2) * width / 2;
		int yp8 = y1m - cos(dir*PI / 2) * height / 2;
     	int rk = radius*radius;
		if ((x2 - xp1)*(x2 - xp1) + (y2 - yp1)*(y2 - yp1) < rk || 
			(x2 - xp2)*(x2 - xp2) + (y2 - yp2)*(y2 - yp2) < rk || 
			(x2 - xp3)*(x2 - xp3) + (y2 - yp3)*(y2 - yp3) < rk || 
			(x2 - xp4)*(x2 - xp4) + (y2 - yp4)*(y2 - yp4) < rk || 
			(x2 - xp5)*(x2 - xp5) + (y2 - yp5)*(y2 - yp5) < rk || 
			(x2 - xp6)*(x2 - xp6) + (y2 - yp6)*(y2 - yp6) < rk || 
			(x2 - xp7)*(x2 - xp7) + (y2 - yp7)*(y2 - yp7) < rk ||
			(x2 - x1m)*(x2 - x1m) + (y2 - y1m)*(y2 - y1m) < rk ||
			(x2 - xp8)*(x2 - xp8) + (y2 - yp8)*(y2 - yp8) < rk) {
			hit = true;
		}
	}
	return hit;
}

bool checkHitbox(int x1, int y1, int r1, int x2, int y2, int r2) {
	if ((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2) < (r1 + r2)*(r1 + r2)) {
		return true;
	}
	return false;
}

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE prevInstance, LPWSTR cmd, int nCmdShow) {
	//Window Shit
	srand(time(NULL));
	//srand(0);
	WNDCLASSEX windowclass;
	ZeroMemory(&windowclass, sizeof(WNDCLASSEX));
	windowclass.cbSize = sizeof(WNDCLASSEX);
	windowclass.hbrBackground = (HBRUSH)COLOR_WINDOW;
	windowclass.hInstance = hInstance;
	windowclass.lpfnWndProc = WindowProc;
	windowclass.lpszClassName = "MainWindow";

	RegisterClassEx(&windowclass);

	int w;
	int h;
	GetDesktopResolution(w, h);
	RECT rect = { 0, 0, w, h };

	HWND windowhandle = CreateWindowEx(0, "MainWindow", "Window", WS_POPUP | WS_VISIBLE | WS_SYSMENU, 0, 0, rect.right - rect.left, rect.bottom - rect.top, NULL, NULL, hInstance, 0);
	if (!windowhandle) return -1;

	//start looping
	ShowWindow(windowhandle, nCmdShow);
	MSG message;
	message.message = WM_NULL;

	Graphics* g = new Graphics();
	 
	if (!g->Init(windowhandle))return -1;

	           

	Globals::sprites->push_back(new Sprite(L"PlayerIcon.png", 32, 32, 290, 1040, 1, 32, 32, g)); //0
	Globals::sprites->push_back(new Sprite(L"CircleProjectile.png", 16, 16, 0, 0, 1, 16, 16, g)); //1
	Globals::sprites->push_back(new Sprite(L"BasicEnemy.png", 32, 32, 100, 100, 1, 32, 32, g)); //2
	Globals::sprites->push_back(new Sprite(L"TestBoss.png", 32, 32, 100, 100, 1, 32, 32, g)); //3
	Globals::sprites->push_back(new Sprite(L"Hail.png", 16, 16, 100, 100, 1, 16, 16, g)); //4
	Globals::sprites->push_back(new Sprite(L"Lava.png", 16, 16, 100, 100, 1, 16, 16, g)); //5
	Globals::sprites->push_back(new Sprite(L"Leaf.png", 16, 16, 100, 100, 1, 16, 16, g)); //6
	Globals::sprites->push_back(new Sprite(L"Player.png", 18, 36, 290, 1040, 1, 18, 36, g));//7
	Globals::sprites->push_back(new Sprite(L"slimeball.png", 16, 16, 290, 1040, 1, 16, 16, g));//8
	Globals::sprites->push_back(new Sprite(L"Spike.png", 16, 16, 290, 1040, 1, 16, 16, g));//9
	Globals::sprites->push_back(new Sprite(L"Spikeball.png", 64, 64, 290, 1040, 1, 64, 64, g));//10
	Globals::sprites->push_back(new Sprite(L"SlimeShooter.png", 32, 32, 100, 100, 1, 32, 32, g)); //11
	Globals::sprites->push_back(new Sprite(L"Dagger.png", 16, 32, 0, 0, 1, 16, 32, g));//12
	Globals::sprites->push_back(new Sprite(L"EnergyBall.png", 16, 16, 0, 0, 1, 16, 16, g));//13
	Globals::sprites->push_back(new Sprite(L"Lightning.png", 16, 16, 0, 0, 1, 16, 16, g));//14
	Globals::sprites->push_back(new Sprite(L"Rock.png", 16, 16, 0, 0, 1, 16, 16, g));//15
	Globals::sprites->push_back(new Sprite(L"Assasin.png", 18, 32, 0, 0, 1, 18, 32, g));//16
	Globals::sprites->push_back(new Sprite(L"Fucker.png", 21, 32, 0, 0, 1, 21, 32, g));//17
	Globals::sprites->push_back(new Sprite(L"yb.png", 32, 32, 0, 0, 1, 32, 32, g));//18
	Globals::sprites->push_back(new Sprite(L"bb.png", 32, 32, 0, 0, 1, 32, 32, g));//19
	Globals::sprites->push_back(new Sprite(L"RandomShooter.png", 32, 32, 0, 0, 1, 32, 32, g));//20
	Globals::sprites->push_back(new Sprite(L"TripleShooter.png", 32, 32, 0, 0, 1, 32, 32, g));//21
	Globals::sprites->push_back(new Sprite(L"CurvedShooter.png", 32, 32, 0, 0, 1, 32, 32, g));//22

	Sprite* s = Globals::sprites->at(7);
	Sprite* background = new Sprite(L"BackGround.png", 1920, 1080, 0, 0, 1, 1920, 1080, g);
	Sprite* gameover = new Sprite(L"Gameover.png", g);

	std::vector<Projectile*> removedprojectiles = std::vector<Projectile*>();

	std::vector<Enemy*> removedenemies = std::vector<Enemy*>();

	Spell* spell = new SingleShot();
	Globals::g = g;

	//Level l = TheDestruction();
	Level l = Apocolypse();
	Sprite* bossbackground = l.bossbackground;
	Sprite* battlebackground = l.background;
	battlebackground->SetRotation(2);

	mciSendString("open \"qualcosa.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
	mciSendString("play mp3 repeat", NULL, 0, NULL);

	g->BeginDraw();
	background->Draw();
	g->EndDraw();

	while (!stop) {
		if (PeekMessage(&message, windowhandle, 0, 0, PM_REMOVE)) {
			DispatchMessage(&message);
		}
		else {
			if (Globals::boss->health < 1) {
				Globals::enemies.clear();
				Globals::ticks = 0;
				Globals::playerProjectiles->clear();
				Globals::projectiles->clear(); 
				l = TheDestruction();
				life = 5;
				atscroll = 0;
				atboss = false;
				battlebackground = l.background;
				bossbackground = l.bossbackground;
				battlebackground->SetRotation(2);
			}
			if (life > 0) {
				l.update();

				if (shift) {
					speed = 2;
				}
				else {
					speed = 4;
				}

				g->BeginDraw();
				g->FillRectangle(40, 0, 810, 35, 1, 0, 0, 1);
				if (Globals::boss->health > 0) {
					g->FillRectangle(40, 0, 810 * Globals::boss->health / Globals::maxbosshealth, 35, 0, 1, 0, 1);
				}
				g->FillRectangle(845, 40, 100, 100, 0, 1, 0, 1);
				if (life > 1) {
					g->FillRectangle(845, 160, 100, 100, 0, 1, 0, 1);
				}
				else {
					g->FillRectangle(845, 160, 100, 100, 1, 0, 0, 1);
				}
				if (life > 2) {
					g->FillRectangle(845, 280, 100, 100, 0, 1, 0, 1);
				}
				else {
					g->FillRectangle(845, 280, 100, 100, 1, 0, 0, 1);
				}
				if (life > 3) {
					g->FillRectangle(845, 400, 100, 100, 0, 1, 0, 1);
				}
				else {
					g->FillRectangle(845, 400, 100, 100, 1, 0, 0, 1);
				}
				if (life > 4) {
					g->FillRectangle(845, 520, 100, 100, 0, 1, 0, 1);
				}
				else {
					g->FillRectangle(845, 520, 100, 100, 1, 0, 0, 1);
				}

				g->DrawRectangle(40, 40, 800, 1000, 0, 0, 0, 1, 5);
				if (atscroll < 5400) {
					battlebackground->Drawbg(atscroll);
				}
				else{
					bossbackground->Draw();
				}
				
				if (even)
				{
					if (atscroll < 5400) {
						atscroll += 1;
					}
					else {
						if (!atboss) {
							atboss = true;
							Globals::boss->improve();
							Globals::maxbosshealth = Globals::boss->health;
							life++;
							if (shotusing == 2) {
								spell = new PlayerTripleShot();
							}
							if (shotusing == 1) {
								spell = new PlayerDoubleShot();
							}
							shotusing++;
							if (life > 5) {
								life = 5;
							}
						}
					}
				}

				even = !even;

				POINT pp;
				GetCursorPos(&pp);
				ScreenToClient(windowhandle, &pp);

				if (ld && x > 40) x -= speed;
				if (rd && x < 808) x += speed;
				if (ud && y > 40) y -= speed;
				if (dd && y < 1008) y += speed;

				if (sp && timer < 1)
				{
					spell->Cast(x, y, x, y);
					timer = 6;
				}
				timer--;


				s->SetPosition(x, y);

				for (Projectile* p : *Globals::projectiles) {
					p->update();
					if (p->inbounds()) {
						if (checkHitbox((int)p->x + p->width / 2, (int)p->y + p->height / 2, p->width / 2, x + 9, y + 16, 6) && shield < 1) {
							removedprojectiles.push_back(p);
							life--;
							//invulnerable
							shield = 150;
						}
						else {
							p->Draw();
						}
					}
					else {
						removedprojectiles.push_back(p);
					}
				}

				for (Projectile* p : removedprojectiles) {
					Globals::projectiles->erase(std::remove(Globals::projectiles->begin(), Globals::projectiles->end(), p), Globals::projectiles->end());
					delete p;
				}
				removedprojectiles.clear();


				for (Projectile* p : *Globals::playerProjectiles) {
					p->update();
					bool hit = false;
					for (Enemy* e : Globals::enemies) {
						if (checkHitbox(e->x + e->w / 2, e->y + e->h / 2, e->w/2, p->x + p->width / 2, p->y + p->height / 2, p->width / 2)) {
							removedprojectiles.push_back(p);
							e->health--;
							hit = true;
							break;
						}
					}
					if (p->inbounds() && !hit) {
						p->Draw();
					}
					else if (!hit) {
						removedprojectiles.push_back(p);
					}
				}

				for (Projectile* p : removedprojectiles) {
					Globals::playerProjectiles->erase(std::remove(Globals::playerProjectiles->begin(), Globals::playerProjectiles->end(), p), Globals::playerProjectiles->end());
					delete p;
				}
				removedprojectiles.clear();

				for (Enemy* e : Globals::enemies) {
					if (checkHitbox(e->x, e->y, 0, e->w, e->h, x, y, 8) && shield < 1) {
						life--;
						//invulnerable
						shield = 150;
						e->health--;
					}
					if (e->x < 40 || e->x > 840 - e->w || e->y < 40 || e->y > 1040 - e->h) {
						removedenemies.push_back(e);
					}
					else {
						if (e->health > 0) {
							e->Attack(x, y);
							e->Draw();
						}
						else {
							Globals::score += e->score;
							removedenemies.push_back(e);
						}
					}
				}
				for (Enemy* e : removedenemies) {
					Globals::enemies.erase(std::remove(Globals::enemies.begin(), Globals::enemies.end(), e), Globals::enemies.end());
					delete e;
				}
				removedenemies.clear();

				s->Draw();
				g->DrawRectangle(1000, 50, 300, 50, 0, 0, 0, 1, 5);
				g->FillRectangle(1000, 50, 300, 50, 0.5, 0.5, 0.5, 1);
				g->Drawtext(std::to_string(Globals::score), 1000, 50, 300, 50, 1, 0, 0, 1);
				g->EndDraw();
				shield--;
				Globals::ticks++;
				if (Globals::ticks % 30 == 0) {
					Globals::score++;
				}
			}
			else {
				g->BeginDraw();
				gameover->Draw();
				g->Drawtext("Score: " + std::to_string(Globals::score), w / 2 - 150, h / 2 + 250, 300, 50, 1, 0, 0, 1);
				g->EndDraw();
			}
		}
	}
	delete g;
	return 0;
}