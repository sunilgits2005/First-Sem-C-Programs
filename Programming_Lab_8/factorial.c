#include <stdio.h>
int main()
{
int n, i, f = 1;
printf("Enter a number:");
scanf("%d",&n);

for(i = 1 ; i <= n ; i++)
{
f *= i;
}

printf("%d\n",f);
}

