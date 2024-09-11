#include <stdio.h>
int main()
{
int sec, h, m, s;
printf("Enter the total number of seconds: ");
scanf("%d", &sec);
h = sec / 3600;
m = (sec % 3600) / 60;
s = sec % 60;
printf("%d hours, %d minutes, and %d seconds", h, m, s);
}
