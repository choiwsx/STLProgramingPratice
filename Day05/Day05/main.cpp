#include "Engine.h"
#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Map2.h"
#include "Map.h"
#include "Goal.h"
#include "Goblin.h"
#include "Slime.h"
#include "Pig.h"
using namespace std;

int main()
{
	
	Engine* engine = new Engine();
	//0번째 맵
	engine->actors.push_back(new Map2());
	//1번째 goal
	engine->actors.push_back(new Goal());
	//2번째 플레이어
	engine->actors.push_back(new Player());
	
	//other monster
	engine->actors.push_back(new Goblin());
	engine->actors.push_back(new Slime());
	engine->actors.push_back(new Pig());


	engine->Run();





	
	delete engine;
	engine = nullptr;





		
	return 0;
}