#include<stdio.h>
int main()
{
int paisa;
printf("Enter Paisa:");
scanf("%d", &paisa);
float rupee = paisa/100.0;
printf("Conversion of Paisa to Rupees: %.2f", rupee);
}
