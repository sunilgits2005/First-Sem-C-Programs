#include <stdio.h>

void LARGEST(int a[][3], int row, int col)
{
int largest = a[0][0];
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
if (a[i][j] > largest)
{
largest = a[i][j];
}
}
}
printf("Largest element: %d\n", largest);
}

void SMALLEST(int a[][3], int row, int col)
{
int smallest = a[0][0];
for (int i = 0; i < row; i++)
{
for (int j = 0; j < col; j++)
{
if (a[i][j] < smallest)
{
smallest = a[i][j];
}
}
}
printf("Smallest element: %d\n", smallest);
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
LARGEST(a, row, col);
SMALLEST(a, row, col);
}

