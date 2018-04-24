#include<iostream>
#include"food.h"
#include"point.h"
#include"windows.h"
#include<conio.h>
#include<windows.h>
#include<time.h>
using namespace std;

void Food::PrintfFood()
{
	srand((unsigned int)time(0));
	int food_x = rand() % 30;
	int food_y = rand() % 30;
	if (food_x < 2)
	{
		food_x += 2;
	}
	if (food_y < 2)
	{
		food_y += 2;
	}

	Food::x = food_x;
	Food::y = food_y;
	GetPoint(x, y);
	cout << "бя";
}
