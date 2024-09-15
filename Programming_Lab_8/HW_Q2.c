#include <stdio.h>
int main()
{
int n,i;
double f=1.0;
printf("Enter a number:");
scanf("%d",&n);

for(i = 1 ; i <= n ; i++)
{
f *= i;
}

double r = 1.0/f;
printf("%.6lf\n", r);
}
