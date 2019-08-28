#pragma once
#include "Character.h"
class MapBase :
	public Character
{
public:
	MapBase();
	~MapBase();



	void Initialize();
	int Size;
	char Tile[10] = { ' ', '-', '|' };



	virtual void Render() override;
};

