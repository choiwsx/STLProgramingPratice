#pragma once
#include <vector>
using namespace std;
class Engine
{
private:
	bool bIsRunnging;
	void Input();
	void Tick();
	void Render();
	int KeyCode;

public:
	Engine();
	~Engine();
	int MonsterCnt = 3;

	void Run();


	class GameMode* gameMode;

	vector<class Actor*> actors;
	
};

