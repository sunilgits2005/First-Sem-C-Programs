#include <stdio.h>
int main()
{
int n, sum;
printf("Enter the number of elements: ");
scanf("%d", &n);

int a[n];
printf("Enter the elements:\n");
for (int i = 0; i < n; i++)
{
scanf("%d", &a[i]);
}

printf("Enter the sum: ");
scanf("%d", &sum);
for (int i = 0; i < n; i++)
{
int newsum = 0;
for (int j = i; j < n; j++)
{
newsum += a[j];
if (newsum == sum)
{
printf("Subarray found from index %d to %d\n", i, j);
return 0;
}
}
}
printf("No subarray found\n");
}
