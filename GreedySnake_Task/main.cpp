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
	//Food &cfood1 = cfood;
	csnake->PrintfSnake();
	cmap->PrintfMap();
	Sleep(200);
	cfood->PrintfFood();
	while (1)
	{
		/*csnake->GetFood(cfood);*/
		csnake->ChangeSnakeDirection();

		if(csnake->GetFood(cfood) == true)
		{
			cfood->PrintfFood();
		}
		/*csnake->PrintfSnake();*/
		
		
		csnake->Moveing() ;
		Sleep(100);
		csnake->HitMap();
		csnake->HitSnake();
	}
	
	return 0;
}