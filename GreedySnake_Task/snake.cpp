#include<iostream>
#include"snake.h"
//#include"point.h"
#include<algorithm>
#include<vector>
#include<conio.h>
#include"food.h"
using namespace std;

class Food;

void Snake::PrintfSnake()//��ӡ��
{

	deque<Point>::iterator iter = snake.begin();
	//for (auto& point : snake)//point������snake����Ԫ��
	//{
	//	point.PrintfCircular();
	//}
	for (iter; iter != snake.end(); iter++)
	{
		iter->PrintfCircular();
	}
	
}

void Snake::MoveMethod()//���ƶ�
{
	switch (Snake::direction)
	{
	case UP: {
		Snake::snake.push_back(Point(snake.back().GetX(), snake.back().GetY() - 1));//ͷ�䳤
	
		break; 
	}
	
	case DOWN: {
		Snake::snake.push_back(Point(snake.back().GetX(), snake.back().GetY() + 1));//ͷ�䳤

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
	MoveMethod();//���ϵ����ƶ���ʽʹ���귢���仯
	snake.front().Point::PrintfBlank();
	snake.pop_front();
	//PrintfSnake();
}

void Snake::ChangeSnakeDirection()
{
	char ch;
	if (kbhit()) //��Ӧ���������¼�
	{
		ch = getch();

		switch (ch)
		{
			
		case 72://��
			{
			if (Snake::direction != DOWN)
				Snake::direction = UP;
			break;
			}
		case 80:
			{//��
			if (Snake::direction != UP)
				Snake::direction = DOWN;
			break;
			}
		case 75://��
			{
			if (Snake::direction != RIGHT)
				Snake::direction = LEFT;
			break;

			}
		case 77://��
			{
			if (Snake::direction != LEFT)
				Snake::direction = RIGHT;
			break;
			}
		}
	}

	//char ch;

	//if (kbhit())//kbhit��������ֵΪ��������ע��

	//{

	//	ch = getch();

	//	switch (ch)

	//	{

	//	case -32:

	//		ch = getch();

	//		switch (ch)

	//		{

	//		case 72://�ϼ���assic

	//			if (direction != Direction::DOWN)//��������뵱ǰ�˶������෴����Ч

	//				direction = Direction::UP;

	//			break;

	//		case 80://�¼���assic

	//			if (direction != Direction::UP)

	//				direction = Direction::DOWN;

	//			break;

	//		case 75://�����assic

	//			if (direction != Direction::RIGHT)

	//				direction = Direction::LEFT;

	//			break;

	//		case 77://�Ҽ���assic

	//			if (direction != Direction::LEFT)

	//				direction = Direction::RIGHT;

	//			break;

	//		default:

	//			break;

	//		}

	//		return true;



	//	case 27://ESC assic�˵�

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

		
		/*cout <<"ײ����ͼ�߽磬��Ϸ����" << endl;
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






