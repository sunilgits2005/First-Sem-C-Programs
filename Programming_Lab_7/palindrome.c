#include<stdio.h>
int main()
{
int n, a, rev = 0, i;
printf("Enter a number: ");
scanf("%d", &n);
i = n;
for(a = n; a!=0;)
{
rev = rev * 10 + a % 10;
a /= 10;
}
if(rev == i)
printf("%d is a palindrome number.\n", i);
else
printf("%d is not a palindrome number.\n", i);
}
