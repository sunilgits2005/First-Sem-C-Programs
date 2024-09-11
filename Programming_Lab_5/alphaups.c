#include<stdio.h>
char main()
{
char c;
printf("Enter an alphabet:");
scanf("%c", &c);
if (c >= 'a' && c <= 'z') // '' is used for storing characters, "" is used for storing string of characters
{
char upperc = c - 32;
printf("The uppercase version is: %c", upperc);
}
else
{
printf("The entered alphabet is already in uppercase. Good Joke.");
}
}
