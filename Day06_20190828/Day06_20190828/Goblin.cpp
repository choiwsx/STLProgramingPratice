#include "Goblin.h"
#include <iostream>
using namespace std;


Goblin::Goblin()
{
	
}


Goblin::~Goblin()
{
}

void Goblin::BeginPlay()
{
	cout << " Goblin::BeginPlay()" << endl;
}

void Goblin::Tick()
{
	cout << " Goblin::Tick()" << endl;
}

void Goblin::Render()
{
	cout << " Goblin::Render()" << endl;
}
