#include <stdio.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char Board[ROWS][COLS], int row, int col);
void SetMine(char Board[ROWS][COLS], int rows, int cols);
void FineMine(char Board[ROWS][COLS], char show[ROWS][COLS],int row, int col);