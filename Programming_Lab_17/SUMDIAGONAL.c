#include <stdio.h>
void SUMDIAGONAL(int a[][3], int b)
{
int sum = 0;
for (int i = 0; i < b; i++)
sum += a[i][i];
printf("Sum of main diagonal: %d\n", sum);
}

int main() {
int b = 3, a[3][3];
printf("Enter elements of the 3x3 matrix:\n");
for (int i = 0; i < b; i++)
for (int j = 0; j < b; j++)
scanf("%d", &a[i][j]);

SUMDIAGONAL(a, b);
}

