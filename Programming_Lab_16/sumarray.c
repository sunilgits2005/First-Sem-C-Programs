#include <stdio.h>
void sum_of_array(int a[], int s, int sum[])
{
    sum[0] = 0;
    for (int i = 0; i < s; i++)
    {
        sum[0] += a[i];
    }
}

int main()
{
    int s;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &s);
    int a[s];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    int sum[1];
    sum_of_array(a, s, sum);
    printf("The sum of the array elements is: %d\n", sum[0]);
}

