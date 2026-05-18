#include<stdio.h>
int main()
{
    int arr[5],i,sum=0;
    printf("enter your 5 elemint:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];

    }
    printf("sum = %d",sum);
    return 0;
}