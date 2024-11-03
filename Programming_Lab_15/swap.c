#include <stdio.h>
void swap(int a, int b)
{
int c = a;
a = b;
b = c;
printf("After swapping: %d %d\n", a, b);
}
int main()
{
int a, b;
printf("Enter two integers: ");
scanf("%d %d", &a, &b);
swap(a, b);
}
