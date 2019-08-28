#pragma once
#include <vector>


using namespace std;

class Engine
{
public:
	Engine();
	~Engine();
	

	void Run();
	bool GetIsRunning();
	void SetIsRunning(bool NewState);

	virtual void AddActor(class Actor* NewActor);

protected:
	virtual void Input();
	virtual void Tick();
	virtual void Render();

	bool bIsRunning;



	vector<class Actor*> Actors;
};

