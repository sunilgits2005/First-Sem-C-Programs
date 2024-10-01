#include <stdio.h>
int main()
{
int n;
printf("Enter the number of elements: ");
scanf("%d",&n);

int a[n], c[n];
printf("Enter %d elements: ", n);
for(int i = 0 ; i < n ; i++)
{
scanf("%d",&a[i]);
c[i]=0;
}
for(int i = 0 ; i < n ; i++)
{
for(int j = 0 ; j < n ; j++)
{
if(a[i] == a[j])
{
c[i]++;
}
}
}
printf("Unique elements:\n");
for(int i = 0 ; i < n ; i++)
{
if(c[i] == 1)
{
printf("%d ",a[i]);
}
}
printf("\n");
}

