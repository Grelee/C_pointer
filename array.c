#define ROW 2
#define COL 3
#include <stdio.h>
union u
{
    char a[ROW][COL];
    char b[ROW*COL];
}U;
int main()
{
    int i, j;
    char ch = 'a';
 
    for (i = 0; i < ROW; i++)
        for (j = 0; j < COL; j++)
        {
            U.a[i][j] = ch;
            ch++;
        }
 
    for (i = 0; i < ROW; i++)
    {
       for (j = 0; j < COL; j++)
            printf("%c - %c\t", U.a[i][j], U.b[i*COL + j]);
        printf("\n");
    }
    return 0;
}
