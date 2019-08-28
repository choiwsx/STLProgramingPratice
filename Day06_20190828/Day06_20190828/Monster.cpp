#include "Monster.h"
#include <iostream>
using namespace std;


Monster::Monster()
{
}


Monster::~Monster()
{
}

void Monster::BeginPlay()
{
	cout << " Monster::BeginPlay()" << endl;
}

void Monster::Tick()
{
	cout << " Monster::Tick()" << endl;
}

void Monster::Render()
{
	cout << " Monster::Render()" << endl;
}
