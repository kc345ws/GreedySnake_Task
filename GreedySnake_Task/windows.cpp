#include<iostream>
#include"windows.h"
#include <stdio.h>
#include"point.h"
#include<windows.h>

using namespace std;

void SetWindowSize(int cols, int lines)//设置窗口大小

{

	//system("贪吃蛇--吉林大学");//设置窗口标题
	//Sleep(10000);
	char cmd[30];

	sprintf(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//一个图形占两个字符，故宽度乘以2

	system(cmd);//system(mode con cols=88 lines=88)设置窗口宽度和高度

}

//void GameOver()
//{
//	GetPoint (15, 15);
//}

void GetPoint(const int x, const int y)
{
	COORD point;

	point.X = x * 2;
	point.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}