#include<stdio.h>
int main()
{
    int arr[5], i, min;
    printf("enter your 5 elemint:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    min= arr[0];
    for(i=0; i<5; i++)
    {
        if(arr[i]<min)
    
    {
        min=arr[i];
    }
    }
    printf("minimum elemint =%d",min);
    return 0;

}
