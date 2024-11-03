#include <stdio.h>
void swap(int a[], int c)
{
if (c > 1)
{
int s = a[0];
a[0] = a[c - 1];
a[c - 1] = s;
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

    swap(a, c);
    printf("Array after swapping: ");
    for (int i = 0; i < c; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}
