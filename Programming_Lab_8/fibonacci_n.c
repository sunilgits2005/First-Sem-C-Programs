#include <stdio.h>
int main()
{
int n, a = 0, b = 1, c, i;
printf("Enter the number of terms: ");
scanf("%d", &n);

printf("Fibonacci series:\n");
for (i = 0; i < n; i++)
{
if (i == 0)
{
printf("%d ", a);
continue;
}
if (i == 1)
{
printf("%d ", b);
continue;
}
c = a + b;
a = b;
b = c;
printf("%d ", c);
}
printf("\n");
return 0;
}

