#include <stdio.h>
void swap_small_large_arr(int a[], int c)
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
    sort_array(a, c);
    printf("The smallest element in the array is: %d\n", a[0]);
    printf("The largest elemment in the array is: %d", a[c-1]);
    printf("\n");
}
