#pragma once
#include "Engine.h"
#ifndef __Map_H__
#define __Map_H__
#define MAXSIZE 10

extern int map[MAXSIZE][MAXSIZE];

extern char MapTile[10];

extern int GoalX;
extern int GoalY;

void InitGoal();
#endif