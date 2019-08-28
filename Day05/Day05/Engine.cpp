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
	printf("���� ����\n");

	gameMode = new GmaeMode();


}


Engine::~Engine()
{
	for (auto actor : actors)
	{
		delete actor;
		actor = nullptr;
	}
	
	actors.clear();

	delete gameMode;
	gameMode = nullptr;

	printf("���� ����\n");

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

	//player->Move(KeyCode, map);

	for (auto actor : actors)
	{
		//actors 0�� ������ �� 
		actor->Tick(KeyCode, (Map*)actors[0]);
		
	}


	
	EGameOverType result = gameMode->CheckRule(actors);
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
	for (auto actor : actors)
	{
		actor->Render();
	}
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
