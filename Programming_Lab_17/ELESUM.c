#include<stdio.h>
void ELESUM(int a[][3], int b[][3], int row, int col)
{
int sum[3][3] = {0};
for (int i = 0; i < row; i++)
for (int j = 0; j < col; j++)
{
sum[i][j] = a[i][j] + b[i][j];
}
printf("Sum of matrices:\n");
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
printf("%d ", sum[i][j]);
}
printf("\n");
}
}
int main()
{
int a[3][3], b[3][3], row, col;
printf("Enter rows and columns: ");
scanf("%d %d", &row, &col);
printf("Enter elements of first matrix:\n");
for (int i = 0; i < row; i++)
for (int j = 0; j < col; j++)
{
scanf("%d", &a[i][j]);
}
printf("Enter elements of second matrix:\n");
for (int i = 0; i < row; i++)
for (int j = 0; j < col; j++)
{
scanf("%d", &b[i][j]);
}
ELESUM(a, b, row, col);
}
