#include <stdio.h>
int main()
{
int n;
printf("Enter row number: ");
scanf("%d", &n);

for (int i = 0; i <= n; i++)
{
for (int j = 0; j < n - i; j++)
{
printf("   ");
}
for (int j = i; j >= 0; j--)
{
printf("%2d ", j);
}
printf("\n");
}
}
