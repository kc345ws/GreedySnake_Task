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
	//bool operator== (const Point& point) //���������
	//{
	//	return (point.x == this->x) && (point.y == this->y);
	//}
	Point()
	{
		
	}

	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void GetPoint(const int x, const int y);
	void PrintfSquare();//��ӡ������
	void PrintfCircular();//��ӡԲ
	void PrintfBlank();//��ӡ�հ�
	void PrintfGameOver();
	

	//int GetX();//��ù��X����
	//int GetY();//��ù��Y����

	void ChangePoint(const int x, const int y)
	{
		this->x = x;
		this->y = y;
	}

	int GetX()
	{
		return this->x;
	}

	int GetY()
	{
		return this->y;
	}




	

private:

	int x, y;
};
#endif
