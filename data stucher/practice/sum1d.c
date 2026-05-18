#include<stdio.h>
int main()
{
    int arr[3],i,sum=0;
    printf("enter your 3 elemint");
    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("sum = %d", sum);
    return 0;
}