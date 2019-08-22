#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

#define UP		72
#define DOWN	80
#define LEFT	75
#define RIGHT	77
#define MAXSIZE 10

int map[MAXSIZE][MAXSIZE] = {
	{1,1,0,1,1,1,1,1,1,1},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,0,0,0,0,0,0,0,0,2},
	{2,1,1,0,0,0,2,2,0,2},
	{2,0,1,0,1,0,0,0,0,2},
	{2,0,1,0,1,0,0,0,0,2},
	{2,0,0,0,1,0,0,0,0,2},
	{2,0,0,0,1,0,0,0,4,2},
	{1,1,1,1,1,1,1,1,1,1}
};

char MapTile[10] = { ' ', '-', '|', 'P', 'G', 'M' };

bool bIsRunning = true;
bool gameend = false;
bool gameover = false;
int PlayerX = 1;
int PlayerY = 1;

int KeyCode = 0;


class Monster {

	int MonsterX = 7;
	int MonsterY = 7;
	int OldMonsterY = 7;
	int OldMonsterX = 7;
	int dxy[2] = { 1,-1 };

public:
	void MonsterMove();

};


Monster* m = new Monster[10];

void PlayerMove()
{
	map[PlayerY][PlayerX] = 0;
	
	if (KeyCode == UP && PlayerY > 0 && map[PlayerY-1][PlayerX] != 1  && map[PlayerY - 1][PlayerX] != 2)
	{
		PlayerY--;
	}
	else if (KeyCode == DOWN && PlayerY < MAXSIZE-1 && map[PlayerY + 1][PlayerX] != 1 && map[PlayerY + 1][PlayerX] != 2)
	{
		PlayerY++;
	}
	else if (KeyCode == LEFT && PlayerX > 0 && map[PlayerY][PlayerX-1] != 2 && map[PlayerY][PlayerX - 1] != 1)
	{
		PlayerX--;
	}
	else if (KeyCode == RIGHT && PlayerX < MAXSIZE-1 && map[PlayerY][PlayerX+1] != 2 && map[PlayerY][PlayerX + 1] != 1)
	{
		PlayerX++;
	}
	if (map[PlayerY][PlayerX] == 4) {
		bIsRunning = false;
		gameend = true;
	}
	else if (map[PlayerY][PlayerX] == 5) {
		bIsRunning = false;
		gameover = true;
	}
	map[PlayerY][PlayerX] = 3;
}




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
	if (map[MonsterY][MonsterX] == 0 || map[MonsterY][MonsterX]==3) {
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

void Input()
{
	KeyCode = getch();
}


void Process()
{
	if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
	else if (KeyCode == 224)
	{
		return;
	}
	PlayerMove();
	for (int i = 0; i < 10; i++) {
		m[i].MonsterMove();
	}
}

void Render() 
{
	system("cls");
	if (!gameend && !gameover) {
		for (int y = 0; y < 10; y++)
		{
			for (int x = 0; x < 10; x++)
			{
				printf("%c ", MapTile[map[y][x]]);
			}
			printf("\n");
		}
	}
	else if (gameover) {
		printf("몬스터에게 잡혀 사망..GAME OVER!\n");
	}
	else {
		printf("도착!!!!게임 끝!!\n");
	}
}



int main() {

	srand(time(nullptr));
	
	while (bIsRunning) {

		Input();
		Process();
		Render();		
	
	}

	return 0;
}
