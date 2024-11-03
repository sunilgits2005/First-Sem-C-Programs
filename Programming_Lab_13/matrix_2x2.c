#include <stdio.h>
int main()
{
float a[2][2],b[2][2],sum[2][2];
printf("First 2x2 matrix:\n");
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
{
printf("Enter a%d%d: ",i+1,j+1);
scanf("%f",&a[i][j]);
}

printf("Enter elements of the second 2x2 matrix:\n");
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
{
printf("Enter b%d%d: ",i+1,j+1);
scanf("%f",&b[i][j]);
}
for(int i=0;i<2;i++)
for(int j=0;j<2;j++)
sum[i][j]=a[i][j]+b[i][j];

printf("Sum of the matrices:\n");
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
printf("%8.2f ",sum[i][j]);
printf("\n");
}
}

