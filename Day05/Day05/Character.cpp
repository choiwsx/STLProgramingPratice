#include "Character.h"
#include <stdio.h>


Character::Character()
{

}


Character::~Character()
{

}

void Character::Move(int KeyCode, Map * map)
{
}

void Character::Input()
{
}

void Character::Tick(int KeyCode, class Map* map)
{
}

void Character::Render()
{
	Actor::Render();
	printf("Character::Rneder()");
}
