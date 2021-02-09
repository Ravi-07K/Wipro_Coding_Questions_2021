//5 3
//3 5 6 9 2
//5
#include <stdio.h>
int main()
{
    int n,k,j,temp;
    scanf("%d %d",&n,&k);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d",a[k-1]);
    return 0;
}
