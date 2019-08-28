#pragma once
class Actor
{
public:
	Actor();
	~Actor();

	int ForegroundColor;
	int BackgroundColor;

//private:
	virtual void Input();
	virtual void Tick(int KeyCode, class Map* map);
	virtual void Render();

};

