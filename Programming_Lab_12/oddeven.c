#include <stdio.h>
int main()
{
int n, i;
printf("Enter the number of elements: ");
scanf("%d", &n);

int a[n];
printf("Enter %d elements: ", n);
for(int i = 0 ; i < n ; i++)
{
scanf("%d",&a[i]);
}

printf("Even numbers:\n");
for(i = 0; i < n; i++)
{
if(a[i] % 2 == 0)
{
printf("%d ", a[i]);
}
}

printf("\n");

printf("Odd numbers:\n");
for(i = 0; i < n; i++)
{
if(a[i] % 2 != 0)
{
printf("%d ", a[i]);
}
}
printf("\n");
}
