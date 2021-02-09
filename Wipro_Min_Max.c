//7 3 6
//2 5 1 8 6 9 4
//2 1 8 9
#include<stdio.h>
int main()
{
    int n,count,min,max;
    scanf("%d%d%d",&count,&min,&max);
    int arr[count];
    for(int i=0; i<count; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<count; i++)
    {
       if(arr[i]<min || arr[i]>max)
        printf("%d ",arr[i]);
    }
    return 0;
}

