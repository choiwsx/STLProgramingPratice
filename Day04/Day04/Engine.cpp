#include "Engine.h"


int KeyCode = 0;

bool bIsRunning;
bool gameend;
bool gameover;

void Initialize() {

	InitGoal();
}


void Tick()
{
	Input();
	Process();
	Render();

}


void Input()
{
	KeyCode = getch();
}
Monster *m = new Monster[5];
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
