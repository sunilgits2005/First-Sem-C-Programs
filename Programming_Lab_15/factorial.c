#include <stdio.h>
void factorial(int n)
{
int r = 1;
for(int i = 1; i <= n; i++)
r *= i;
printf("Factorial: %d\n",r);
}
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
factorial(n);
}
