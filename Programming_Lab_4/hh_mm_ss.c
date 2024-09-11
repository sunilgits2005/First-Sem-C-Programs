#include <stdio.h>
int main()
{
int h1, m1, s1; 
int h2, m2, s2; 
int h, m, s;
printf("Enter first time (hh:mm:ss): ");
scanf("%d:%d:%d", &h1, &m1, &s1);
printf("Enter second time (hh:mm:ss): ");
scanf("%d:%d:%d", &h2, &m2, &s2);
s = s1 + s2;
m = m1 + m2 + (s / 60);
s = s % 60;
h = h1 + h2 + (m / 60);
m = m % 60;
printf("Sum of the two times is: %d:%d:%d", h, m, s);
}
