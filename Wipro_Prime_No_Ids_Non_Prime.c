#include<stdio.h>
int main()
{
    int n,r,j=0;
    scanf("%d",&n);
    int arr[n],i,brr[n],c=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
       r=arr[i]%10;
       if(r==2 || r==3 || r==5 || r==7)
        printf("%d ",arr[i]);
       else{
        brr[j++]=arr[i];
        c++;
       }
    }
    return 0;
}
