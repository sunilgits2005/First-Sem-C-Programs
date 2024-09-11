#include<stdio.h>
#include<math.h>
int main()
{
int n, a, b = 0, y = 0, rem, sum = 0;
printf("Enter a number: ");
scanf("%d",&n);
a = n;

while (a != 0)
{
a /= 10;
++y;
}
a = n;

while (a != 0)
{
b = a % 10;
sum += pow(b, y);
a /= 10;
}

if(sum == n)
printf("%d is an Armstrong number.\n", n);
else
printf("%d is not an Armstrong number.\n", n);
}

