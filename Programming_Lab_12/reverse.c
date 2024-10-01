#include <stdio.h>
int main()
{
int n, i;
printf("Enter the number of elements: ");
scanf("%d", &n);

int a[n+1];
printf("Enter the elements: ");
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

printf("Reversed array: ");
for (i = n - 1; i >= 0; i--)
{
printf("%d ", a[i]);
}
printf("\n");
}

