#include "Monster.h"
#include "Map.h"
#include "GameplayStatics.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

Monster::Monster()
{
	X = 5;
	Y = 5;
	Shape = 'M';
}


Monster::~Monster()
{

}

void Monster::Initialize()
{

}

void Monster::Move(class Map* map)
{
	int Direction = rand() % 4;
	int NewMonsterY = Y;
	int NewMonsterX = X;
	if (Direction == 0)
	{
		NewMonsterY--;
	}
	else if (Direction == 1)
	{
		NewMonsterY++;
	}
	else if (Direction == 2)
	{
		NewMonsterX--;
	}
	else if (Direction == 3)
	{
		NewMonsterX++;
	}

	if (map->data[NewMonsterY][NewMonsterX]==0)
	{
		X = NewMonsterX;
		Y = NewMonsterY;
	}

}

void Monster::Render()
{
	GameplayStatics::GotoXY(X, Y);
	printf("%c", Shape);
}
