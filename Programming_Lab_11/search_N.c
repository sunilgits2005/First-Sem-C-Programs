#include <stdio.h>
int main()
{
int n, i, val, f = 0;
printf("Enter the number of elements: ");
scanf("%d",&n);

int a[n];
printf("Enter %d elements:\n",n);
for (i = 0; i < n; i++)
{
scanf("%d",&a[i]);
}

printf("Enter the value to search: ");
scanf("%d",&val);
for (i = 0; i < n; i++)
{
if (a[i] == val)
{
f = 1;
break;
}
}

if (f)
{
printf("Element %d found at index %d.\n",val,i);
}
else
{
printf("Element %d not found.\n",val);
}
}
