#define ROW 3
#define COL 3

void InitBoard(int board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void CompterMove(char board[ROW][COL], int row, int col);
//���Ӯ  '*'
//����Ӯ  '#'
//ƽ��    'Q'
//����    'C'

char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);