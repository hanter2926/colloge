#include<stdio.h>
int main()
{
    int arr[10],i,item,found=0;
    printf("enter your elemint 10:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter elemint to search:");
    scanf("%d", & item);
    for(i=0;i<10;i++)
    {
        if(arr[i]==item)
        {
            printf("elemint found at position%d",i+1);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("elemint not found");
    }
    
    return 0;
}