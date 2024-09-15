#include <stdio.h>
#include <math.h>
int main()
{
int i, x, n;
double r;
printf("Enter value of x and n terms of the sequence:");
scanf("%d %d",&x,&n);

r = pow(x, n);

double f=1;
for(i = 1 ; i <= n ; i++)
{
f *= i;
}
r /= f;

printf("%lf ",r);
}

