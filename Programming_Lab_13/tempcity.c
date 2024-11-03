#include <stdio.h>
int main()
{
int i,j;
printf("Enter number of cities: ");
scanf("%d",&i);
printf("Enter number of days: ");
scanf("%d",&j);

float t[i][j];char n[i][50];
for(int c=0;c<i;c++)
{
printf("Enter name of city %d: ",c+1);
scanf("%s",n[c]);
printf("Enter temperatures for %s for %d days:\n",n[c],j);
for(int d=0;d<j;d++)
{

printf("Day %d: ",d+1);
scanf("%f",&t[c][d]);
}
}
printf("\nDay    ");
for(int c=0;c<i;c++) printf("%s   ",n[c]);
printf("\n");
for(int d=0;d<j;d++)
{
printf("Day %d: ",d+1);
for(int c=0;c<i;c++) printf("%.2f   ",t[c][d]);
printf("\n");
}
}

