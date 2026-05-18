#include<stdio.h>
int main()
{
    int arr[4],i;
    printf("enter your 4 alimant:\n");
    
    for(i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("arrey enemant are:\n");
    for(i=0; i<4; i++)
    {
        printf("%d",arr[i]);
        printf("\n");
    }
    return 0;
}
