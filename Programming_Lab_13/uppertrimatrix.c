#include <stdio.h>
int main()
{
int a, b, sum = 0;
printf("Enter the number of rows and columns of the matrix: ");
scanf("%d %d",&a,&b);
int m[a][b];
printf("Enter the elements of the matrix:\n");
for(int i = 0; i < a; i++)
{
for(int j = 0; j < b; j++)
{
scanf("%d",&m[i][j]);
}
}
for(int i = 0; i < a; i++)
{
for(int j = 0; j < b; j++)
{
if(i < j)
sum += m[i][j];
}
}
printf("Sum of upper triangle elements: %d\n",sum);
}

