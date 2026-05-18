#include<stdio.h>
int main()
{
    int arr[5]={20,30,40,50,60};
    int low = 0, high = 4, mid,item;
    printf("enter elemint to search:");
    whille(low<= hight)
    {
        mid = (low + hight)/2;
        if(a[mid]==item)
        {
            printf("enter your elemint found at postion%d", mid+1);
            break;
        }
        else if(item<arr[mid])
        {
            hight=mid-1

        }
        else
        {
            low=mid+1;
        }
    }
    if (low>high)
    printf("")
}