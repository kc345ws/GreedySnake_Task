#include<iostream>
#include"windows.h"
#include <stdio.h>
#include"point.h"
#include<windows.h>

using namespace std;

void SetWindowSize(int cols, int lines)//���ô��ڴ�С

{

	//system("̰����--���ִ�ѧ");//���ô��ڱ���
	//Sleep(10000);
	char cmd[30];

	sprintf(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//һ��ͼ��ռ�����ַ����ʿ�ȳ���2

	system(cmd);//system(mode con cols=88 lines=88)���ô��ڿ�Ⱥ͸߶�

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