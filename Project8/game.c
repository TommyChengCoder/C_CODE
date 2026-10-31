#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//    初始化棋盘
void Initboard (char board[ROWS][COLS], int rows, int cols ,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows;i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//   打印棋盘
void print(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("  ");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=  row; i++)
	{
			printf("%d ", i);

		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
//  布置雷
void set_mine(char mine[ROWS][COLS],int row,int col)
{
	int count = easy_game;
	while(count)
	{
		int x=rand()%row+1;
		int y=rand()%col+1;
		if (mine[x][y] == '0') //防止在同一个地方重复放雷
		{
			mine[x][y] = '1';
			count--;
		}
	}
	
}
//  排雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int num1 = 0;
	int num2 = 0;
	int win = 0;
	while (win <= row*col- easy_game)
	{
		printf("请输入你要排查的位置：");
		scanf("%d%d", &num1, &num2);
		if (num1 >= 1 && num1 <= row && num2 >= 1 && num2 <= col)
		{
			if (mine[num1][num2] == '1')
			{
				printf("你被炸死了\n");
				print(mine, ROW, COL);//让你死后看看雷的布局
				break;
			}
			else
			{
				if (show[num1][num2] == '*')
				{
					//统计周围有几个雷
					int count = get_mine(mine, num1, num2);
					show[num1][num2] = count + '0';
					print(show, ROW, COL);
					win++;
				}
				else
				{
					printf("该位置已经排查过了，请重新输入\n");
				}
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
		if (win == row * col - easy_game)
		{
			printf("恭喜你排雷成功\n");
			print(mine, ROW, COL);
			break;
		}
	}
	
}
  
//统计周围雷的个数
int get_mine(char mine[ROWS][COLS],int row,int col)
{
	int x = row;
	int y = col;
	return (mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x - 1][y] + mine[x + 1][y] + mine[x - 1][y + 1] + mine[x][y + 1] + mine[x + 1][y + 1]) - 8 * '0';
}