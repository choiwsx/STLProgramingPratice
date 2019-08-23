
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Player.h"
#include "Map.h"
#include "Monster.h"

#ifndef __Engine_H__
#define __Engine_H__

extern bool bIsRunning;
extern bool gameend;
extern bool gameover;


extern int KeyCode;
void Initialize();
void Tick();



void Input();


void Process();

void Render();
#endif