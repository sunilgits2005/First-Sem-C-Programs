#include <stdio.h>
void prime(int n)
{
int p = 1;
if(n <= 1)
p = 0;
for(int i = 2; i * i <= n; i++)
{
if(n % i == 0)
{
p = 0;
}
}
if(p)
printf("%d is a prime number.\n",n);
else
printf("%d is not a prime number.\n",n);
}
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
prime(n);}
