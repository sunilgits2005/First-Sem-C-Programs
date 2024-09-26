#include <stdio.h>
int main()
{
int n, i, l;
printf("Enter the number of integers: ");
scanf("%d", &n);
int a[n];
printf("Enter %d integers:\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}
l = a[0];
for (i = 1; i < n; i++)
{
if (a[i] > l)
{
l = a[i];
}
}
printf("The largest element is: %d\n", l);
}

