#include <stdio.h>
int main()
{
int n, i, p = 1;
printf("Enter the number of integers: ");
scanf("%d",&n);
int a[n];
printf("Enter %d integers:\n",n);
for (i = 0; i < n; i++)
{
scanf("%d",&a[i]);
p *= a[i];
}
printf("The multiplication is: %d\n", p);
}
