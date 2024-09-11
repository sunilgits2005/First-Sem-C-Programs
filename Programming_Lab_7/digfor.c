#include <stdio.h>
int main()
{
int sum = 0, a;
printf("Enter the number: ");
scanf("%d",&a);

do
 {
    sum += a % 10;
    a /= 10;
 }
while(a!=0);

printf("Sum: %d\n",sum);
}

