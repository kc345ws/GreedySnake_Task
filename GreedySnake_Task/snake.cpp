#include<iostream>
#include"snake.h"
//#include"point.h"
#include<algorithm>
#include<vector>
#include<conio.h>
#include"food.h"
using namespace std;

class Food;

void Snake::PrintfSnake()//打印蛇
{

	deque<Point>::iterator iter = snake.begin();
	//for (auto& point : snake)//point将遍历snake所有元素
	//{
	//	point.PrintfCircular();
	//}
	for (iter; iter != snake.end(); iter++)
	{
		iter->PrintfCircular();
	}
	
}

void Snake::MoveMethod()//蛇移动
{
	switch (Snake::direction)
	{
	case UP: {
		Snake::snake.push_back(Point(snake.back().GetX(), snake.back().GetY() - 1));//头变长
	
		break; 
	}
	
	case DOWN: {
		Snake::snake.push_back(Point(snake.back().GetX(), snake.back().GetY() + 1));//头变长

		break;

	}
			   
	case LEFT: {
		Snake::snake.push_back(Point(snake.back().GetX() - 1, snake.back().GetY()));
	
		
		break; 
	}
	case RIGHT: {
		Snake::snake.push_back(Point(snake.back().GetX() + 1, snake.back().GetY()));
	
		
		break; 
	}
	default:
		break;

	}
	snake.back().PrintfCircular();
	
}

void Snake::Moveing()
{
	MoveMethod();//不断调用移动方式使坐标发生变化
	snake.front().Point::PrintfBlank();
	snake.pop_front();
	//PrintfSnake();
}

void Snake::ChangeSnakeDirection()
{
	char ch;
	if (kbhit()) //响应键盘输入事件
	{
		ch = getch();

		switch (ch)
		{
			
		case 72://上
			{
			if (Snake::direction != DOWN)
				Snake::direction = UP;
			break;
			}
		case 80:
			{//下
			if (Snake::direction != UP)
				Snake::direction = DOWN;
			break;
			}
		case 75://左
			{
			if (Snake::direction != RIGHT)
				Snake::direction = LEFT;
			break;

			}
		case 77://右
			{
			if (Snake::direction != LEFT)
				Snake::direction = RIGHT;
			break;
			}
		}
	}

	//char ch;

	//if (kbhit())//kbhit函数返回值为两个，需注意

	//{

	//	ch = getch();

	//	switch (ch)

	//	{

	//	case -32:

	//		ch = getch();

	//		switch (ch)

	//		{

	//		case 72://上键的assic

	//			if (direction != Direction::DOWN)//如果方向与当前运动方向相反，无效

	//				direction = Direction::UP;

	//			break;

	//		case 80://下键的assic

	//			if (direction != Direction::UP)

	//				direction = Direction::DOWN;

	//			break;

	//		case 75://左键的assic

	//			if (direction != Direction::RIGHT)

	//				direction = Direction::LEFT;

	//			break;

	//		case 77://右键的assic

	//			if (direction != Direction::LEFT)

	//				direction = Direction::RIGHT;

	//			break;

	//		default:

	//			break;

	//		}

	//		return true;



	//	case 27://ESC assic菜单

	//		return false;



	//	default:

	//		return true;


	//	}

	//}

	//return true;
	//return true;
}

void Snake::HitMap()
{
	if (snake.back().Point::GetX() < 2 || snake.back().GetX() > 29 || snake.back().Point::GetY() < 2 || snake.back().GetY() > 29)
	{
		/*snake.emplace_back(35, 2);*/

		/*Point *point;*/
		Point point;
		point.PrintfGameOver();

		
		/*cout <<"撞到地图边界，游戏结束" << endl;
		exit(0);*/
	}
}

void Snake::GetFood(const Food & cfood)
{
	if (snake.back().GetX() == cfood.x&&snake.back().GetY() == cfood.y)
	{
		snake.emplace_back(cfood.x,cfood.y);
		PrintfSnake();
	}
}



//void Snake::GetFood(const Food& cfood)
//{
//	if (Snake::snake.back().GetX() == cfood.x)
//}

//void Snake::PrintfBlank()
//{
//	cout << " ";
//}






