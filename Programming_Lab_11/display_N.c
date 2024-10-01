#include <stdio.h>
int main()
{
int n, i;
printf("Enter the number of integers: ");
scanf("%d", &n);
int a[n];

printf("Enter %d integers:\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

printf("The integers are: ");
for (i = 0; i < n; i++)
{
printf("%d ", a[i]);
}
printf("\n");
}

