#pragma once
#include "Actor.h"

class Character : public Actor
{
public:
	Character();
	~Character();

	int X;
	int Y;
	

	char Shape;
	int Color;


	virtual void Input() override;
	virtual void Tick(int KeyCode, class Map* map) override;
	virtual void Render() override;

protected:

	virtual	void Move(int KeyCode, class Map* map);
};

