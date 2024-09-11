#include<stdio.h>
float main()
{
float a, b, c, d, e;
printf("Enter English Marks:");
scanf("%f", &a);
printf("Enter Mathematics Marks:");
scanf("%f", &b);
printf("Enter Science Marks:");
scanf("%f", &c);
printf("Enter SST Marks:");
scanf("%f", &d);
printf("Enter Computer Science Marks:");
scanf("%f", &e);
float sum = (a+b+c+d+e);
float avg = sum/5;
printf("Average Marks of 5 subjects of student: %.3f\n", avg);
float p = (sum/200) * 100;
printf("Percentage: %.3f", p);
}

