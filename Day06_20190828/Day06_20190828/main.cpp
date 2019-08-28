
#include "Engine.h"
#include "Monster.h"
#include "Player.h"
#include "WildPig.h"
#include "Slime.h"
#include "Goblin.h"


int main()
{
	Engine* engine = new Engine();
	engine->AddActor(new Player());
	engine->AddActor(new Goblin());
	engine->AddActor(new Slime());
	engine->AddActor(new WildPig());

	engine->Run();


	delete engine;
	engine = nullptr;
	

	//Actor* a = new Actor();



	return 0;
}