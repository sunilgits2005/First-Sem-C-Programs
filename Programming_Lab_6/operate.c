#include <stdio.h>
float main()
{
float a, b;
int choice;
float r;
printf("Enter two integers:");
scanf("%f %f", &a, &b);

// Menu for Operation
printf("\nPick your Choice:\n");
printf("1. Add\n");
printf("2. Subtract\n");
printf("3. Multiply\n");
printf("4. Divide\n");
printf("Enter your choice: ");
scanf("%d", &choice);

// Switch Case
switch (choice)
{
	case 1:
		r = a + b;
		printf("Result of addition: %.2f\n", r);
		break;
	case 2:
		r = a - b;
		printf("Result of subtraction: %.2f\n", r);
		break;
	case 3:
		r = a * b;
		printf("Result of multiplication: %.2f\n", r);
		break;
	case 4:
		r = a / b;
		printf("Result of division: %.2f\n", r);
		break;
	default:
		printf("Invalid choice.\n");
}
}
