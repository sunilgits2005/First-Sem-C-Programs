#include <stdio.h>
int main()
{
int n,d,f,s=0,i;
printf("Enter a number:");
scanf("%d",&n);

d = n;
while(d > 0)
{
f = 1;
for(i = 1; i <= d%10 ; i++)
f *= i;
s += f;
d /= 10;
}

if(s == n)
{
printf("Strong\n");
}
else
{
printf("Not Strong\n");
}
}
