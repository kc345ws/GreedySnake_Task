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
	//bool operator== (const Point& point) //运算符重载
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
	void PrintfSquare();//打印正方形
	void PrintfCircular();//打印圆
	void PrintfBlank();//打印空白
	void PrintfGameOver();
	

	//int GetX();//获得光标X坐标
	//int GetY();//获得光标Y坐标

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
