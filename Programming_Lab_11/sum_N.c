#include <stdio.h>
int main()
{
int n, i, sum = 0;
printf("Enter the number of integers: ");
scanf("%d", &n);
int a[n];
printf("Enter %d integers:\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
sum += a[i];
}
printf("The sum is: %d\n", sum);
}
