#include<stdio.h>
int main()
{
int a, b, c;
printf("Enter 2 numbers:");
scanf("%d %d", &a, &b);
c = b;
b = a;
printf("%d %d", c, b);
}
