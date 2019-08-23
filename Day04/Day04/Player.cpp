#include "Player.h"
bool bIsRunning;
bool gameend;
bool gameover;
void PlayerMove()
{
	map[PlayerY][PlayerX] = 0;

	if (KeyCode == UP && PlayerY > 0 && map[PlayerY - 1][PlayerX] != 1 && map[PlayerY - 1][PlayerX] != 2)
	{
		PlayerY--;
	}
	else if (KeyCode == DOWN && PlayerY < MAXSIZE - 1 && map[PlayerY + 1][PlayerX] != 1 && map[PlayerY + 1][PlayerX] != 2)
	{
		PlayerY++;
	}
	else if (KeyCode == LEFT && PlayerX > 0 && map[PlayerY][PlayerX - 1] != 2 && map[PlayerY][PlayerX - 1] != 1)
	{
		PlayerX--;
	}
	else if (KeyCode == RIGHT && PlayerX < MAXSIZE - 1 && map[PlayerY][PlayerX + 1] != 2 && map[PlayerY][PlayerX + 1] != 1)
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
