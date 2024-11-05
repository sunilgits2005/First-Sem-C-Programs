#include <stdio.h>
void fibonacci(int n)
{
int a = 0, b = 1, temp;
for(int i = 0; i < n; i++)
{
if(i == 0)
temp = a;
else if(i == 1)
temp = b;
else
{
temp = a + b;
a = b;
b = temp;
}
if(i == n - 1)
printf("Fibonacci term %d: %d\n", n, temp);
}
}
int main()
{
int n;
printf("Enter the term number: ");
scanf("%d",&n);
fibonacci(n);
}
