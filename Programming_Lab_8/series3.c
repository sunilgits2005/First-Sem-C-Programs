#include <stdio.h>
int main()
{
int n, a = 0, b = 1, c = 1, d, i;
printf("Enter n terms of the sequence:");
scanf("%d",&n);
printf("%d %d %d ", a, b, c);

for(i = 3 ; i < n ; i++)
{
d = a+b+c;
a = b;
b=c;
c=d;
printf("%d ",d);
}
}

