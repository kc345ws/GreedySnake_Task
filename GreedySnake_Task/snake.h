#pragma once
#ifndef SNAKE_H
#define SNAKE_H
#include"point.h"
#include<vector>
#include<deque>
#include"food.h"
using namespace std;

class Food;
class Snake
{
public:
//必须写在函数里
	enum Direction { UP, DOWN, LEFT, RIGHT };//蛇移动的类型

	Snake()
	{
		snake.push_back(Point(10, 8));//初始蛇长度
		snake.emplace_back(10, 9);
		snake.emplace_back(10, 10);
		direction = DOWN;//蛇出生向下运动
	}
	void PrintfSnake();//绘制蛇
	void MoveMethod();//蛇移动方式
	void ChangeSnakeDirection();//改变蛇的方向
	void Moveing();//蛇移动
	void HitMap();
	void GetFood(const Food& cfood);

	/*void PrintfBlank();*/

private:
	deque<Point> snake;//蛇身容器

	Direction direction;//蛇的方向

	friend class Food;
};

#endif
