#include<stdio.h>
int main()
{
int metre;
printf("Enter distance in metres:");
scanf("%d", &metre);
int kilo = metre/1000;
metre = metre%1000;
printf("%d kilometres, %d metres", kilo, metre);
}
