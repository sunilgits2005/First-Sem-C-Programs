#include <stdio.h>

void ADDMATRIX(int a[][3], int b[][3], int result[][3], int row)
{
for (int i = 0; i < row; i++)
{
for (int j = 0; j < 3; j++)
{
result[i][j] = a[i][j] + b[i][j];
}
}
}

int main()
{
int row = 3
;
int a[row][3], b[row][3], result[row][3];

printf("Enter elements of the first matrix:\n");
for (int i = 0; i < row; i++)
{
for (int j = 0; j < 3; j++)
{
scanf("%d", &a[i][j]);
}
}

printf("Enter elements of the second matrix:\n");
for (int i = 0; i < row; i++)
{
for (int j = 0; j < 3; j++)
{
scanf("%d", &b[i][j]);
}
}

ADDMATRIX(a, b, result, row);

printf("Resultant Matrix after addition:\n");
for (int i = 0; i < row; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d ", result[i][j]);
}
printf("\n");
}
}
