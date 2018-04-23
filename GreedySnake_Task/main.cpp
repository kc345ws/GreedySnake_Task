#include<iostream>
#include"snake.h"
#include"point.h"
#include <windows.h>
#include "windows.h"
#include<conio.h>
#include"map.h"
#include"food.h"
using namespace std;

int main()
{
	SetConsoleTitle("Ì°³ÔÉß");
	SetWindowSize(41, 35);
	Snake *csnake = new Snake();
	Map *cmap = new Map();
	Food *cfood = new Food();
	csnake->PrintfSnake();
	cmap->PrintfMap();
	Sleep(200);
	while (1)
	{
		csnake->PrintfSnake();
		cfood->PrintfFood();
		csnake->ChangeSnakeDirection();
		csnake->Moveing() ;
		Sleep(200);
		csnake->HitMap();
	}
	
	return 0;
}