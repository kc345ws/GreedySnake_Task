#pragma once
#ifndef SNAKE_H
#define SNAKE_H
#include"point.h"
#include<deque>
#include"food.h"
using namespace std;

class Food;

class Snake
{
public:
//����д�ں�����
	enum Direction { UP, DOWN, LEFT, RIGHT };//���ƶ�������

	Snake();
	
	void PrintfSnake();//������

	void MoveMethod();//���ƶ���ʽ

	void ChangeSnakeDirection();//�ı��ߵķ���

	void Moveing();//���ƶ�

	void HitMap();//��ײ����ͼ�߽�

	bool GetFood(Food* cfood);//�߳Ե�ʳ��

	void HitSnake();//��ײ��������

	/*void PrintfBlank();*/

private:
	deque<Point> snake;//��������

	Direction direction;//�ߵķ���

	friend class Food;
};

#endif
