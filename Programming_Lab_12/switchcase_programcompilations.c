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
int a = 0, b = 1, c, n = 10;
for(int i = 0; i < n; i++)
{
printf("%d ",a);
c = a + b;
a = b;
b = c;
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

case 3: // NOT ATTEMPTED
break;

default:
printf("INVALID INPUT >:( \n");
break;
}
}
