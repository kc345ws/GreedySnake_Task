#pragma once
#ifndef POINT_H
#define POINT_H

class Point
{
public:
	Point(int x , int y)
	{
		this->x = x;
		this->y = y;
	}
	void GetPoint(const int x, const int y);
	void PrintfSquare();//��ӡ������
	void PrintfCircular();
	

private:

	int x, y;
};
#endif
