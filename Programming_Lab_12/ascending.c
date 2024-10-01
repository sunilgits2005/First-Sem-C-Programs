#include <stdio.h>
int main()
{
int b, n;
printf("Enter the number of elements: ");
scanf("%d",&n);

int a[n+1];
printf("Enter %d integers:\n", n);
for(int i = 0 ; i < n ; i++)
{
scanf("%d",&a[i]);
}
for(int i = 0 ; i < n - 1 ; i++)
{
for(int j = i + 1 ; j < n ; j++)
{
if(a[i] > a[j])
{
b = a[i];
a[i] = a[j];
a[j] = b;
}
}
}
for(int i = 0 ; i < n ; i++)
{
printf("%d ",a[i]);
}
}


