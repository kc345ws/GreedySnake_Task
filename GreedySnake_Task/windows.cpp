#include<iostream>
#include"windows.h"
#include <stdio.h>
#include"point.h"
#include<windows.h>
#include"snake.h"
int Marks = 0;
int num = 1;

using namespace std;

void SetWindowSize(int cols, int lines)//���ô��ڴ�С

{

	//system("̰����--���ִ�ѧ");//���ô��ڱ���
	//Sleep(10000);
	char cmd[30];

	sprintf(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//һ��ͼ��ռ�����ַ����ʿ�ȳ���2

	system(cmd);//system(mode con cols=88 lines=88)���ô��ڿ�Ⱥ͸߶�

}

void GetPoint(const int x, const int y)//��ȡ����
{
	COORD point;

	point.X = x * 2;
	point.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), point);
}

void AddMarks(Snake* csnake,Food *cfood)
{
	SettxtColor(3);
	GetPoint(35, 2);
	cout << "����:" << endl;
	GetPoint(35, 3);
	SettxtColor(3);
	cout << " "<<Marks << endl;
	if (csnake->GetFood(cfood) == false)
	{
		::Marks += 10 * num;
		::num++;
	}
}

void SettxtColor(int colorID)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}