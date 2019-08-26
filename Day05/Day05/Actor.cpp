#include "Actor.h"
#include <stdio.h>


Actor::Actor()
{
}


Actor::~Actor()
{
}

void Actor::Input()
{

}

void Actor::Tick(int KeyCode, class Map* map)
{
	//Render();
}

void Actor::Render()
{
	printf("Actor::Render\n");
}
