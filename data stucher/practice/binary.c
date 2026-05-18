#include<stdio.h>
int main()
{
    int arr[10]={10,20,30,40,50,55,70,80,85,90};
    int low=0, high=10, mid, item;
    printf("enter your elemint");
    scanf("%d", &item);
    while(low <= high)
    {
        mid=(low + high)/2;
        if(arr[mid]==item)
        {
            printf("elemint found at position %d", mid + 1);
            break;
        }
        
        else if (item < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
           low = mid + 1;
        }
    }
    if(low > high)
       printf("enter not found");
       return 0;
}