#include<stdio.h>
int main()
{
int n, f, l, m, sum;
printf("Enter a 3 digit number:");
scanf("%d", &n);
f = n % 10;
l = n / 100;
m = (n / 10) % 10;
sum = f + l + m;
printf("Sum: %d", sum);
}
