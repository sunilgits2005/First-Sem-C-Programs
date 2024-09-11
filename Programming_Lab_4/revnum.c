#include <stdio.h>
int main()
{
int num, rev=0, rem;
printf("Enter a 3 digit number: ");
scanf("%d", &num);
int a = num / 100;
int b = (num / 10) % 10;
int c = num % 10;
rev = c * 100 + b * 10 + a; 
printf("Reversed number: %d\n", rev);
}
