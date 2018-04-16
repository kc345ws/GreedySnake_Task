#include<iostream>
#include<windows.h>
#include"point.h"
using namespace std;

void Point::GetPoint(const int x, const int y)//获取光标坐标
{
	COORD point;

	point.X = x * 2;
	point.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}

void Point::PrintfSquare()
{
	GetPoint(x, y);
	cout << "■";

}

void Point::PrintfCircular()
{
	GetPoint(x, y);
	cout << "●";
}