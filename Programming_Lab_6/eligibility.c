#include<stdio.h>
float main()
{
float a, b, c, sum, cum;
printf("Enter marks obtained in physics:");
scanf("%f", &a);
printf("Enter marks obtained in chemistry:");
scanf("%f", &b);
printf("Enter marks obtained in matheatics:");
scanf("%f", &c);
sum = (a + b + c);
cum = (a + c);
if (sum >= 190 || cum >= 140)
{
printf("The candidate is eligible for admission.");
}
else
{
printf("The candidate is not eligible for admission.");
}
}

