#include <stdio.h>
int main()
{
int n, i, j, h = 0, sum = 0;
printf("Enter n terms of a series:");
scanf("%d",&n);

for(i = 1 ; i <= n ; i++)
{
for(j = 1 ; j <= i ; j++)
{
h += j;
}
sum = h;
}

printf("%d",sum);
}
