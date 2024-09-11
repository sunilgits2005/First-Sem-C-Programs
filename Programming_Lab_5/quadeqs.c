#include <stdio.h>
#include <math.h>
int main()
{
double a, b, c, d, r1, r2;
printf("Quadratic Equation form: ax^2 + bx + c = 0 \n");
printf("Enter coefficients of a, b, c: ");
scanf("%lf %lf %lf", &a, &b, &c);
d = (b * b) - (4 * a * c);
if (d > 0)
{
r1 = (-b + sqrt(d)) / (2 * a);
r2 = (-b - sqrt(d)) / (2 * a);
printf("Equation has two distinct real roots: %.2lf and %.2lf", r1, r2);
}
else if (d == 0)
{
r1 = -b / (2 * a);
printf("Equation has one real root: %.2lf", r1);
}
else
{
printf("Equation has no real roots");
}
}

