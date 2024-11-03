#include <stdio.h>
int main() {
int r1,c1,r2,c2;
printf("Enter rows and columns for first matrix: "),scanf("%d%d",&r1,&c1);
printf("Enter rows and columns for second matrix: "),scanf("%d%d",&r2,&c2);
if(r1!=r2||c1!=c2)
{
printf("Matrices are not equal.\n");
return 0;
}

float a[r1][c1],b[r2][c2];
printf("Enter elements of first matrix:\n");
for(int i=0;i<r1;i++)
for(int j=0;j<c1;j++)
scanf("%f",&a[i][j]);

printf("Enter elements of second matrix:\n");
for(int i=0;i<r2;i++)
for(int j=0;j<c2;j++)
scanf("%f",&b[i][j]);

int equal=1;
for(int i=0;i<r1;i++)
for(int j=0;j<c1;j++)
if(a[i][j]!=b[i][j])
{
equal=0;
break;
}
if(equal)
printf("Matrices are equal.\n");
else
printf("Matrices are not equal.\n");
}
