#include <stdio.h>
#include <math.h>
int main()
{
int x, n, i, j;
double sum = 1.0;
printf("Enter value of x and n terms of the sequence:");
scanf("%d %d",&x,&n);

if(n % 2 != 0)
{
n++;
}

for(i = 2 ; i <= n ; i += 2)
{
double f = 1.0;

for(j = 1 ; j <= i ; j++)
{
f *= j;
}

sum += pow(x,i) / f;
}

printf("%lf ",sum);
}

