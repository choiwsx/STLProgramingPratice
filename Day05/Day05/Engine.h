#pragma once
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
	

	void Run();

	class Player* player;
	class Map* map;
	class Monster* monster;
	class Goal* goal;
	class GameMode* gameMode;
};

