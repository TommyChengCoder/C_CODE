#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define easy_game 10
void game();
//初始化棋盘
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void print(char board[ROWS][COLS], int row, int col);
//布置雷
void set_mine(char arr[ROWS][COLS], int row, int col);
//排查雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
// 统计周围有几个雷
int get_mine(char mine[ROWS][COLS], int row, int col);



//1.写菜单
//2.写扫雷的外形框架
//3.布置雷
//4.实现排雷，统计周围有几个雷