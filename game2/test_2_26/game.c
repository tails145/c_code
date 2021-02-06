#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < rows;i++)
	{
		for (j = 0;j < cols;j++)
		{
			Board[i][j] = set;
		}
	}
}

void DisplayBoard(char Board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i <= row;i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1;i <= row;i++)
	{
		printf("%d ", i);
		for (j = 1;j <= col;j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char Board[ROWS][COLS], int rows, int cols)
{
	int count = COUNT;

	while (count)
	{
		int x = rand() % rows + 1;
		int y = rand() % rows + 1;
		if (Board[x][y] == '0')
		{
			Board[x][y] = '1';
			count--;
		}
	}
}

int get_mine_count(char Board[ROWS][COLS],int x,int y )
{
	return Board[x - 1][y - 1] + Board[x - 1][y] + Board[x - 1][y + 1] + Board[x][y - 1] + Board[x][y + 1] + Board[x + 1][y - 1] + Board[x + 1][y] + Board[x + 1][y + 1] - 8 * '0';
}

void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - COUNT)
	{
		printf("请输入坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y <= col && x >= 1)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = get_mine_count(mine, x, y );
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}