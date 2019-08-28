#include "Map.h"
#include <iostream>
#include "GameplayStatics.h"

Map::Map()
{
	Size = 10;
}


Map::~Map()
{
}

void Map::Render()
{
	MapBase::Render();
	system("cls");

	for (int y = 0; y < Size; y++)
	{
		for (int x = 0; x < Size; x++)
		{
			GameplayStatics::GotoXY(x, y, 11);
			printf("%c", Tile[data[y][x]]);
		}
	}
}
