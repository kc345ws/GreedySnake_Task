#pragma once
#ifndef FOOD_H
#define FOOD_H
#include"snake.h"
#include<iostream>
using namespace std;

class Food
{
public:
	void PrintfFood();

	Food() : x(0), y(0)
	{

	}
private:

	int x, y;//ʳ������

	friend class Snake;
};
#endif