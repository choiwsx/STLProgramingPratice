#include "Engine.h"
#include <iostream>
#include "Player.h"
#include "Map.h"
#include "Monster.h"
#include "Goal.h"
#include "GameMode.h"
#include <conio.h>

Engine::Engine()
{
	bIsRunnging = true;
	printf("엔진 생성\n");

	player = new Player();
	map = new Map();
	monster = new Monster();
	goal = new Goal();
	gameMode = new GameMode();

}


Engine::~Engine()
{

	delete player;
	player = nullptr;

	delete map;
	map = nullptr;

	delete monster;
	monster = nullptr;

	delete goal;
	goal = nullptr;

	delete gameMode;
	gameMode = nullptr;

	printf("엔진 제거\n");

}

void Engine::Input()
{
	KeyCode = getch();

}

void Engine::Tick()
{
	if (KeyCode == 'q')
	{
		bIsRunnging = false;
	}
	else if (KeyCode == 224)
	{
		return;
	}

	player->Move(KeyCode, map);
	monster->Move(map);
	EGameOverType result = gameMode->CheckRule(player, monster, goal);
	switch (result)
	{
		case EGameOverType::Dead:
		{
			bIsRunnging = false;
		}
		break;
		case EGameOverType::Escape:
		{
			bIsRunnging = false;
		}
		break;
	}


}

void Engine::Render()
{
	map->Render();
	player->Render();
	monster->Render();
	goal->Render();
}

void Engine::Run()
{
	while (bIsRunnging)
	{
		Input();
		Tick();
		Render();
	}
}
