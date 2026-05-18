#include<stdio.h>

int main()
{
    int arr[7], i, min;

    printf("Enter your 7 elements:\n");

    for(i = 0; i < 7; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];

    for(i = 1; i < 7; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Minimum element = %d", min);

    return 0;
}