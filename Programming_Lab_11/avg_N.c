#include <stdio.h>
int main()
{
int n, i, sum = 0;
printf("Enter the number of integers: ");
scanf("%d", &n);
int a[n];
printf("Enter %d integers:\n", n);
for (i = 0; i < n; i++)
{
scanf("%d", &a[i]);
sum += a[i];
}
float avg = (float) sum / n;
printf("The average is: %.3f\n", avg);
}
