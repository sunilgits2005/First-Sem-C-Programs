#include <stdio.h>
void add(int a, int b)
{
printf("Sum: %d\n", a + b);
}
int main()
{
int num1, num2;
printf("Enter two numbers: ");
scanf("%d%d", &num1, &num2);
add(num1, num2);
}

