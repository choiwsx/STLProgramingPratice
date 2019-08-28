#include "Map2.h"
#include <iostream>
#include "GameplayStatics.h"


Map2::Map2()
{
	Size = 20;

}


Map2::~Map2()
{
}

void Map2::Render()
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

