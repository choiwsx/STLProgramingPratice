#include "GameMode.h"
#include "Player.h"
#include "Goal.h"
#include "Monster.h"



GameMode::GameMode()
{

}


GameMode::~GameMode()
{
}

// -1 : GameOver 
// 1 : Escape
EGameOverType GameMode::CheckRule(class Player* player, class Monster* monster, class Goal* goal)
{
	if (player->X == monster->X &&
		player->Y == monster->Y)
	{
		return EGameOverType::Dead;
	}
	else if (player->X == goal->X &&
		player->Y == goal->Y)
	{
		return EGameOverType::Escape;
	}
	else
	{
		return EGameOverType::Playing;
	}
}
