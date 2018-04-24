#pragma once
#ifndef POINT_H
#define POINT_H

class Point
{
public:

	/*Point()
	{

	}*/

	//Point(const int x, const int y) : x(x), y(y)
	//{

	//}
	Point();

	Point(int x, int y);

	int operator== (const Point& point) //���������
	{
		return (point.x == this->x) && (point.y == this->y);
	}
		
	void GetPoint(const int x, const int y);

	void PrintfSquare();//��ӡ������

	void PrintfCircular();//��ӡԲ

	void PrintfBlank();//��ӡ�հ�

	int GetX();//��øõ������Xֵ

	int GetY();//��øõ������Yֵ

	//void PrintfGameOver();//��ӡ��Ϸ����
	/*void ChangePoint(const int x, const int y)
	{
		this->x = x;
		this->y = y;
	}*/


	friend class Snake;

private:

	int x, y;

	
};
#endif
