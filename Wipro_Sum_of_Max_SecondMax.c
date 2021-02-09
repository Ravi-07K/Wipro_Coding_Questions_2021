//3
//1500 1400 1600
//3100
#include<stdio.h>
int main()
{
    int n,i,j,count=1,temp,max,smax;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]>max){
            smax=max;
        max=arr[i];
        }
        else if(arr[i]>smax && arr[i]<max){
                smax=arr[i];

        }

    }
    temp=max+smax;
    printf("%d",temp);


      return 0;
}
