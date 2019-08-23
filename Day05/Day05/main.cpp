#include "Engine.h"
#include <iostream>

using namespace std;

int main()
{
	
	Engine* engine = new Engine();

	engine->Run();
	
	delete engine;
	engine = nullptr;

	
	return 0;
}