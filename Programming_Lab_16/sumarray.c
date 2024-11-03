#include<stdio.h>
void sum_of_arr(int a[],int m)
{
int sum = 0, i;
for(i = 0; i < m; i++)
{
sum = sum + a[i];
}
printf("Sum of the array: %d \n",sum);
}
int main()
{
int m,i;
printf("Enter the size of the array: ");
scanf("%d",&m);
int a[m];
printf("Enter the elements of the array: ");
for(i = 0; i < m; i++)
scanf("%d",&a[i]);
sum_of_arr(a,m);
}

