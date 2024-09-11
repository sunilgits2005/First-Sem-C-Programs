#include <stdio.h>
int main()
{
int n, rev=0, a;
printf("Enter a number: ");
scanf("%d",&n);

for(rev = 0; n!=0; n/=10)
{
a = n % 10;
rev = rev * 10 + a;
}
printf("Reversed number: %d\n",rev);
}
