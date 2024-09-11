#include <stdio.h>
float main()
{
float n;
int a;
printf("Enter the total marks secured by the student (0 to 100): ");
scanf("%f", &n);

if (n >= 90 && n <= 100)
{
a = 1;
}
else if (n >= 80 && n <= 89)
{
a = 2;
}
else if (n >= 70 && n <= 79)
{
a = 3;
}
else if (n >= 60 && n <= 69)
{
a = 4;
}
else if (n >= 50 && n <= 59)
{
a = 5;
}
else if (n >= 40 && n <= 49)
{
a = 6;
}
else if (n < 40)
{
a = 7;
}

switch (a)
{
        case 1:
            printf("Secured Grade is O\n");
            break;
        case 2:
            printf("Secured Grade is E\n");
            break;
        case 3:
            printf("Secured Grade is A\n");
            break;
        case 4:
            printf("Secured Grade is B\n");
            break;
        case 5:
            printf("Secured Grade is C\n");
            break;
        case 6:
            printf("Secured Grade is D\n");
            break;
	case 7:
	    printf("Secured Grade is F. Student has failed.\n");
	    break;
        default:
            printf("Invalid Grade\n");
            break;
}
}
