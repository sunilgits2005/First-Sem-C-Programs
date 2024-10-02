#include<stdio.h>
int main()
{
int c;

printf("\nEnter your choice:\n");
printf("1. Print a fibonacci series upto a range of 10 numbers\n");
printf("2. Print sum of the reciprocal of odd numbers upto n terms\n");
printf("3. Print a cool pattern\n");
printf("Choice:\n");
scanf("%d", &c);

switch(c)
{

case 1:
int a = 0, b = 1, d, n = 10;
for(int i = 0; i < n; i++)
{
printf("%d ",a);
d = a + b;
a = b;
b = d;
}
printf("\n");
break;

case 2:
int m;
float sum = 0;
printf("Enter n terms of the series:");
scanf("%d", &m);
for (int j = 1; j <= m; j += 2)
{
sum +=  (1.0 / j);
}
printf("Sum: %.4f\n", sum);
break;

case 3:
char e;
printf("Enter an uppercase letter (A-Z): ");
scanf("%c", &e);
for (int i = 0; i <= e - 'A'; i++)
{
for (int j = 'A'; j <= e - i; j++)
printf("%c ", j);
for (int k = 0; k < i * 2 - 1; k++)
printf("  ");
for (int l = e - i; l >= 'A'; l--)
if (l != e)
printf("%c ", l);
printf("\n");
}
break;

default:
printf("INVALID INPUT >:( \n");
break;
}
}
