#include <stdio.h>
int main()
{
int n, a = 2, b = 1, c, i;
printf("Enter n terms of a lucas sequence:");
scanf("%d",&n);

//if(n >= 1)
//printf("%d ",a);
if(n >= 2)
printf("%d ",b);

for(i = 3 ; i <= n + 1 ; i++)
{
c = a+b;
a = b;
b = c;
printf("%d ",c);
}
}
