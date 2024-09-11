#include<stdio.h>
float main()
{
float b, h;
printf("Enter base and height of a triangle:");
scanf("%f %f", &b, &h);
float a = 0.5 * (b * h);
printf("Area of triangle: %.3f", a);
}
