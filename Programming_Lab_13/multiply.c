#include <stdio.h>
int main() {
int r1,c1,r2,c2;
printf("Enter rows and columns for first matrix: ");
scanf("%d%d",&r1,&c1);
printf("Enter rows and columns for second matrix: ");
scanf("%d%d",&r2,&c2);

float a[r1][c1],b[r2][c2],result[r1][c2];
printf("Enter elements of first matrix:\n");
for(int i=0;i<r1;i++)
for(int j=0;j<c1;j++)
scanf("%f",&a[i][j]);

printf("Enter elements of second matrix:\n");
for(int i=0;i<r2;i++)
for(int j=0;j<c2;j++)
scanf("%f",&b[i][j]);

for(int i=0;i<r1;i++)
for(int j=0;j<c2;j++)
{
result[i][j]=0;
for(int k=0;k<c1;k++)
result[i][j]+=a[i][k]*b[k][j];
}

printf("Result of multiplication:\n");
for(int i=0;i<r1;i++)
{
for(int j=0;j<c2;j++)
printf("%8.2f ",result[i][j]);
printf("\n");
}
}
