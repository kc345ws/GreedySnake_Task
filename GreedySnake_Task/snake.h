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
//����д�ں�����
	enum Direction { UP, DOWN, LEFT, RIGHT };//���ƶ�������

	Snake()
	{
		snake.push_back(Point(10, 8));//��ʼ�߳���
		snake.emplace_back(10, 9);
		snake.emplace_back(10, 10);
		direction = DOWN;//�߳��������˶�
	}
	void PrintfSnake();//������
	void MoveMethod();//���ƶ���ʽ
	void ChangeSnakeDirection();//�ı��ߵķ���
	void Moveing();//���ƶ�
	void HitMap();
	void GetFood(const Food& cfood);

	/*void PrintfBlank();*/

private:
	deque<Point> snake;//��������

	Direction direction;//�ߵķ���

	friend class Food;
};

#endif
