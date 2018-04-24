#include<iostream>
#include"snake.h"
//#include"point.h"
#include<algorithm>
#include<vector>
#include<conio.h>
#include"food.h"
#include"windows.h"
#include<time.h>
#include<windows.h>
using namespace std;

Snake::Snake()
{
	snake.push_back(Point(10, 8));//��ʼ�߳���
	snake.emplace_back(10, 9);
	snake.emplace_back(10, 10);
	direction = DOWN;//�߳��������˶�
}

void Snake::PrintfSnake()//��ӡ��
{

	deque<Point>::iterator iter = snake.begin();
	//for (auto& point : snake)//point������snake����Ԫ��
	//{
	//	point.PrintfCircular();
	//}
	for (iter; iter != snake.end(); iter++)
	{
		srand((unsigned int)time(0));
		int colorID = rand() % 10;
		if (colorID == 0)
			++colorID;
		
		SettxtColor(colorID);
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
	
	
}

void Snake::HitMap()
{
	if (snake.back().Point::GetX() < 2 || snake.back().GetX() > 29 || snake.back().Point::GetY() < 2 || snake.back().GetY() > 29)
	{
		/*snake.emplace_back(35, 2);*/

		/*Point *point;*/
		GetPoint(10, 32);
		cout << "ײ����ͼ�߽磬��Ϸ����" << endl;
		GetPoint(11, 33);
		exit(0);

		
		/*cout <<"ײ����ͼ�߽磬��Ϸ����" << endl;
		exit(0);*/
	}
}

bool Snake::GetFood(Food * cfood)
{
	if (snake.back().GetX() == cfood->x&&snake.back().GetY() == cfood->y)
	{
		snake.emplace_back(Point(cfood->x, cfood->y));
		PrintfSnake();
		Beep(5000, 10);
		return true;
	}
	else
		return false;
}

void Snake::HitSnake()
{
	/*unique(snake.begin(), snake.end());*/
	//deque<Point>::iterator iter = snake.begin();
	int num = size(snake);
	for (int i = 0; i < num-1 ; i++)
	{
		if (snake[i] == snake[num-1])
		{
			GetPoint(10, 32);
			cout << "ײ���ߵ����壬��Ϸ����" << endl;
			GetPoint(11, 33);
			exit(0);
		}
	}
	//for (iter; iter != snake.end(); iter++)
	//{
	//	if(*iter == snake.back())
	//}
}


//void Snake::GetFood(const Food& cfood)
//{
//	if (Snake::snake.back().GetX() == cfood.x)
//}

//void Snake::PrintfBlank()
//{
//	cout << " ";
//}






