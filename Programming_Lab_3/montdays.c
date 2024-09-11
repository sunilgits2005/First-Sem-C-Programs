#include<stdio.h>
int main()
{
int days, months;
printf("Enter no. of days:");
scanf("%d", &days);
months = days/30;
days = days % 30;
printf("Months, Days: %d, %d", months, days);
}
