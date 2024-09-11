#include <stdio.h>
int main()
{
int count = 0, sum = 0, num;

do
{
printf("Enter a number: ");
scanf("%d",&num);
sum += num;
count++;
}
while(count<10);
float avg = sum / 10.0;

printf("Sum: %d\n",sum);
printf("Average: %.2f\n", avg);
}
