#include <stdio.h>
int main()
{
int n = 26;
char ch = 'z';
for (int i = 1; ch >= 'a'; i++)
{
for (int j = 0; j < i && ch >= 'a'; j++)
{
printf("%c ", ch);
ch--;
}
printf("\n");
}
}
