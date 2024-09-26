#include <stdio.h>
int main()
{
int n, i, pos;
printf("Enter the number of elements: ");
scanf("%d",&n);
if (n <= 0)
{
printf("Array must have at least one element.\n");
return 1;
}
int a[n];
printf("Enter %d elements:\n",n);
for (i = 0; i < n; i++)
{
scanf("%d",&a[i]);
}
printf("Enter the position to delete (0 to %d): ", n - 1);
scanf("%d",&pos);
if (pos < 0 || pos >= n)
{
printf("Invalid position!\n");
return 1;
}
for (i = pos; i < n - 1; i++)
{
a[i] = a[i + 1];
}
n--;
printf("Array after deletion:\n");
for (i = 0; i < n; i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
