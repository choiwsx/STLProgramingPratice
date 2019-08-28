#include "Engine.h"
#include "Actor.h"
#include <conio.h>


Engine::Engine()
{
	bIsRunning = true;
}


Engine::~Engine()
{
	for (auto SelectActor : Actors)
	{
		delete SelectActor;
		SelectActor = nullptr;
	}
	Actors.clear();
}

void Engine::Run()
{

	for (auto SelectActor : Actors)
	{
		SelectActor->BeginPlay();
	}


	while (bIsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

bool Engine::GetIsRunning()
{
	return bIsRunning;
}

void Engine::SetIsRunning(bool NewState)
{
	bIsRunning = NewState;
}

void Engine::AddActor(Actor * NewActor)
{
	

	if (NewActor != nullptr)
	{
		Actors.push_back(NewActor);
	}

}

void Engine::Input()
{
	int KeyCode = _getch();
	if (KeyCode == 'q')
	{
		SetIsRunning(false);
	}
}

void Engine::Tick()
{
	for (auto SelectActor : Actors)
	{
		SelectActor->Tick();
	}

}


void Engine::Render()
{
	for (auto SelectActor : Actors)
	{
		SelectActor->Render();
	}
}
