#include <stdio.h>
void PRIMESUM(int a[][3], int row, int col)
{
int sum = 0;
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
int num = a[i][j];
if (num > 1)
{
int prime = 1;
for (int k = 2; k * k <= num; k++)
{
if (num % k == 0)
{
prime = 0;
break;
}
}
if (prime)
{
sum += num;
}
}
}
}
printf("Sum of prime numbers: %d\n", sum);
}

int main()
{
int row, col;
printf("Enter number of rows and columns: ");
scanf("%d%d", &row, &col);

int a[row][col], i, j;
printf("Enter elements of the matrix:\n");
for (i = 0; i < row; i++)
{
for (j = 0; j < col; j++)
{
scanf("%d", &a[i][j]);
}
}
PRIMESUM(a, row, col);
}
