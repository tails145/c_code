#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("**********************\n");
	printf("****1.play  0.exit****\n");
	printf("**********************\n");
}

void game()
{
	printf("扫雷\n");
	//定义棋盘
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FineMine(mine,show, ROW, COL);
	
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case  1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}

	} while (input);
}

int main()
{
	test();
	return 0;
}





















