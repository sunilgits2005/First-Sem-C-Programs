#include<stdio.h>
int main()
{
int n, f, l, sum;
printf("Enter a 6 digit number:");
scanf("%d", &n);
f = n % 10;
l = n / 100000;
sum = f + l;
printf("Sum of first and last digits: %d", sum);
}
