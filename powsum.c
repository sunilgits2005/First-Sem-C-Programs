#include <stdio.h>
#include <math.h>
int main()
{
int n,i;
float sum=0;
printf("Enter the number of terms (n): ");
scanf("%d",&n);
for(i = 1 ; i <= n ; i++)
{
sum += pow(i,i);
}
printf("The sum of the series is: %f\n",sum);
}
