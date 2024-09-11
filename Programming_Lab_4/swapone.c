#include <stdio.h>
int main()
{
int a, b;
printf("Enter two numbers:");
scanf("%d %d", &a, &b);
a = a + b - (b = a); 
printf("After swapping: a = %d, b = %d\n", a, b);
}
