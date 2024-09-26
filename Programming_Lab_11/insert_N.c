#include <stdio.h>
int main()
{
int n, i, pos, val;
printf("Enter the number of elements: ");
scanf("%d",&n);
int a[n+1];

printf("Enter %d elements:\n",n);
for (i = 0; i < n; i++)
{
scanf("%d",&a[i]);
}

printf("Enter the position to insert (0 to %d): ",n);
scanf("%d",&pos);
if (pos < 0 || pos > n)
{
printf("Invalid Input!\n");
return 1;
}

printf("Enter the value to insert: ");
scanf("%d",&val);
for (i = n; i > pos; i--)
{
a[i] = a[i - 1];
}
a[pos] = val;

printf("Array after insertion:\n");
for (i = 0; i <= n; i++)
{
printf("%d ",a[i]);
}
printf("\n");
}
