#include<stdio.h>
int main()
{
    int n,k,cs,sum=0,i,j;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        cs=arr[i];
        j+=1;
        while(j<=n)
        {
            if(cs==k)
            {
                printf("%d %d",i,j-1);
            }
            if(cs>sum || j==n)
                break;
            cs=cs+arr[j];
            j+=1;
        }
    }
    printf("-1");
    return 0;
}
