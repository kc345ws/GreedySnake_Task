#pragma once
#ifndef SNAKE_H
#define SNAKE_H
#include"point.h"
#include<vector>
using namespace std;

class Snake
{
public:
//必须写在函数里
	Snake()
	{
		snake.push_back(Point(5, 5));
		snake.emplace_back(5, 6);
		snake.emplace_back(5, 7);
	}

	void PrintfSnake();//绘制蛇

private:
	vector<Point> snake;

};

#endif
