#include<stdio.h>
float main()
{
float a, b, c;
printf("Enter the measurement of the sides of a triangle: ");
scanf("%f %f %f", &a, &b, &c);
if (a == b && b == c)
{
printf("Triangle is equilateral.\n");
}
else if (a == b || a == c || b == c)
{
printf("Triangle is isosceles.\n");
}
else
{
printf("Triangle is scalene.\n");
}
}

