#include <stdio.h>
int main()
{
int n, i, FL, SL;
printf("Enter the number of elements: ");
scanf("%d",&n);
if (n < 2)
{
printf("Array must have at least two elements.\n");
return 1;
}
int a[n];
printf("Enter %d elements:\n",n);
for (i = 0; i < n; i++)
{
scanf("%d",&a[i]);
}
FL = a[0];
SL = a[1];
if (FL < SL)
{
FL = a[1];
SL = a[0];
}
for (i = 2; i < n; i++)
{
if (a[i] > FL)
{
SL = FL;
FL = a[i];
}
else if (a[i] > SL && a[i] < FL)
{
SL = a[i];
}
}
if (SL == FL)
{
printf("There is no second largest element.\n");
}
else
{
printf("The second largest element is: %d\n", SL);
}
}
