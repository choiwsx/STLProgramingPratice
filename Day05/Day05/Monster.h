#pragma once
#include "Character.h"
class Monster : public Character
{
public:
	Monster();
	~Monster();


	int NewMonsterX;
	int NewMonsterY;
	int Color;


	virtual void Tick(int KeyCode, class Map* map) override;
	virtual void Render() override;

protected:

	virtual void Move(int Keycode, class Map* map) override;

};

