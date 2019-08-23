
#pragma once
#include <time.h>
#include <stdlib.h>
#include "Map.h"
#include "Engine.h"
#ifndef __Monster_H__
#define __Monster_H__

class Monster{

	int MonsterX = 7;
	int MonsterY = 7;
	int OldMonsterY = 7;
	int OldMonsterX = 7;
	int dxy[2] = { 1,-1 };

public:
	void MonsterMove();

};
#endif