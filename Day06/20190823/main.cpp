#include "Engine.h"
#include <iostream>

//STL
#include <vector>
#include <list>
//#include <map>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
#include "Map.h"
#include "Map2.h"
#include "Goal.h"
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "WildPig.h"

using namespace std;

int main()
{
	Engine* engine = new Engine();
	//0 map
	engine->actors.push_back(new Map2());
	//1 goal
	engine->actors.push_back(new Goal());
	//2 Player
	engine->actors.push_back(new Player());

	//other monsters
	engine->actors.push_back(new Goblin());
	engine->actors.push_back(new Slime());
	engine->actors.push_back(new WildPig());

	engine->Run();
	delete engine;
	engine = nullptr;

	
	return 0;
}

void STLTest()
{
	vector<int> v;
	list<int> l;
	int a[6];

	for (int i = 0; i <= 5; ++i)
	{
		v.push_back(i);
		l.push_back(i);
		a[i] = i;
	}
	
	//v.erase(v[3]);


	//for (int i = 0; i < v.size(); ++i)
	//{
	//	cout << v[i] << endl;
	//}
	//for (int i = 0; i < l.size(); ++i)
	//{
	//	cout << l[i] << endl;
	//}
	//�ݺ���
	//for (vector<int>::iterator iter = v.begin(); iter != v.end(); ++iter)
	//for (auto iter = v.begin(); iter != v.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//for (auto iter = l.begin(); iter != l.end(); ++iter)
	//{
	//	cout << *iter << endl;
	//}

	//�ε��� �� �� �� ���, ���� ��� X
	for (auto iter : a)
	{
		cout << iter << endl;
	}
}