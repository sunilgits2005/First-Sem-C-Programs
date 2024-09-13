#include <stdio.h>
int main()
{
int n, i, sum = 0;
printf("Enter a number to check: ");
scanf("%d", &n);

for(i = 1 ; i < n - 1 ; i++)
{
if(n % i == 0)
{
sum += i;
}
}

if (sum == n)
{
printf("%d is a perfect number.\n", n);
}
else
{
printf("%d is not a perfect number.\n", n);
}
}

