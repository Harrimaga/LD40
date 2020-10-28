#pragma once
class Spell
{
public:
	Spell();
	~Spell();
	virtual void Cast(int px, int py, int ex, int ey) {};
};

