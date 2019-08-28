#include "WildPig.h"
#include <iostream>
using namespace std;


WildPig::WildPig()
{
}


WildPig::~WildPig()
{
}

void WildPig::BeginPlay()
{
	cout << " Wild::BeginPlay()" << endl;
}

void WildPig::Tick()
{
	cout << " Wild::Tick()" << endl;
}

void WildPig::Render()
{
	cout << " Wild::Render()" << endl;
}
