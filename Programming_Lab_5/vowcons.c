#include<stdio.h>
char main()
{
char c;
printf("Enter a character:");
scanf("%c", &c);
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
if (c >= 'A' && c <= 'Z')
{
c = c + 32;
}
if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
{
printf("%c is a vowel.\n", c);
}
else
{
printf("%c is a consonant.\n", c);
}
}
}
