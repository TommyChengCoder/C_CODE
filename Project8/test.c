#define _CRT_SECURE_NO_WARNINGS
#include "game.h"



void menu() //菜单
{
		printf("****************************\n");
		printf("******1.开始扫雷游戏********\n");
		printf("******0.    退出    ********\n");
		printf("****************************\n");
}
void test()  //游戏的主体
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();	
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();  
			break;
	    case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input!=0);
}

void game()   //游戏的运行
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//布置雷
	set_mine(mine,ROW,COL);
	// 打印棋盘
	//print(mine, ROW, COL);
	printf("\n");
	print(show, ROW, COL);
	//   排雷
	find_mine(mine,show, ROW, COL);
	//统计周围雷的个数
	
}

int main ()
{
	test();
	return 0;
}