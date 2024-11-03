#include <stdio.h>
void sort_array(int a[], int c)
{
for (int i = 0; i < c - 1; i++)
for (int j = 0; j < c - i - 1; j++)
if (a[j] > a[j + 1])
{
int b = a[j];
a[j] = a[j + 1];
a[j + 1] = b;
}
}

int main()
{
    int c;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &c);
    int a[c];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < c; i++)
    {
        scanf("%d", &a[i]);
    }
    sort_array(a, c);
    printf("The smallest element in the array is: %d\n", a[0]);
    printf("The largest elemment in the array is: %d", a[c-1]);
    printf("\n");
}
