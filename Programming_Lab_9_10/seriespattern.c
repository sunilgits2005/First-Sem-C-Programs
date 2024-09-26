// WAP to print the following pattern
// 1 3 7 15 31 . . .
#include <stdio.h>
#include <math.h>
int main()
{
int n, i;
printf("Enter n terms of the sequence: ");
scanf("%d", &n);

for(i = 1 ; i <= n ; i++)
{
int a = pow(2, i) - 1;
printf("%d ", a);
}
printf("\n");
}
