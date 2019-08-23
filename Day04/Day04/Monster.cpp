#include "Monster.h"
bool bIsRunning;
bool gameend;
bool gameover;

void Monster::MonsterMove() {

	int randomXY = rand() % 2;
	int randomfour = rand() % 2;
	if (randomXY == 0) //dx
	{
		MonsterX += dxy[randomfour];
	}
	else //dy
	{
		MonsterY += dxy[randomfour];
	}
	if (map[MonsterY][MonsterX] == 0 || map[MonsterY][MonsterX] == 3) {
		if (map[MonsterY][MonsterX] == 3) {
			bIsRunning = false;
			gameover = true;
		}
		map[OldMonsterY][OldMonsterX] = 0;
		map[MonsterY][MonsterX] = 5;
		OldMonsterY = MonsterY;
		OldMonsterX = MonsterX;
	}
	else {
		MonsterX = OldMonsterX;
		MonsterY = OldMonsterY;
	}
}