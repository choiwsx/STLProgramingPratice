#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>
#include "Engine.h"
#include "Map.h"
#include "Monster.h"
#include "Player.h"







int main() {

	
	Initialize();
	
	while (bIsRunning)
	{
		Tick();	
	}

	return 0;
}
