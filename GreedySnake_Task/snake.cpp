#include<iostream>
#include"snake.h"
#include"point.h"
#include<algorithm>
#include<vector>
using namespace std;


void Snake::PrintfSnake()
{
	vector<Point>::iterator iter = snake.begin();
	for (auto& point : snake)//声明snake的一个引用 sanke是Point类型的可以用Point的函数
	{
		point.PrintfCircular();
	}
	
	

}