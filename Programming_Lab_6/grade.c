#include<stdio.h>
int main()
{
int n;
printf("Enter total marks secured by a student:");
scanf("%d", &n);
if (n >= 90 && n <= 100)
{
printf("Secured grade is O\n");
}
else if (n >= 80 && n <= 89)
{
printf("Secured grade is E\n");
}
else if (n >= 70 && n <= 79)
{
printf("Secured grade is A\n");
}
else if (n >= 60 && n <= 69)
{
printf("Secured grade is B\n");
}
else if (n >= 50 && n <= 59)
{
printf("Secured grade is C\n");
}
else if (n >= 40 && n <= 49)
{
printf("Secured grade is D\n");
}
else if (n < 40)
{
printf("Secured grade is F. Student has Failed.\n");
}
else
{
printf("Input is incorrect.");
}
}
