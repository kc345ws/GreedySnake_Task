#include<iostream>
#include"snake.h"
#include"point.h"
#include<algorithm>
#include<vector>
using namespace std;


void Snake::PrintfSnake()
{
	vector<Point>::iterator iter = snake.begin();
	for (auto& point : snake)//����snake��һ������ sanke��Point���͵Ŀ�����Point�ĺ���
	{
		point.PrintfCircular();
	}
	
	

}