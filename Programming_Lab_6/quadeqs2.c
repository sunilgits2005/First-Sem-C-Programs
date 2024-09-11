#include <stdio.h>
#include <math.h>
int main()
{
double a, b, c;
double d, r1, r2;
int n;
printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0): ");
scanf("%lf %lf %lf", &a, &b, &c);
d = (b * b) - (4 * a * c);

if (d > 0)
{
n = 1;
}
else if (d < 0)
{
n = 3;
}
else
{
n = 2;
}

switch (n)
{
	case 1:
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("The equation has two distinct real roots: %.2lf %.2lf\n", r1, r2);
            break;
        case 2:
            r1 = -b / (2 * a);
            printf("The equation has one real root: %.2lf\n", r1);
            break;
        case 3:
            printf("No real roots.\n");
            break;
        default:
            printf("Invalid.\n");
            break;
}
}

