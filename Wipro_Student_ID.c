//5
//1 2 3 4 5
//1 3 5 2 4
#include <stdio.h>
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int a[n];
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
    for(i=0;i<n;i=i+2)
    printf("%d ",a[i]);
    for(i=1;i<n;i=i+2)
    printf("%d ",a[i]);
    return 0;
}
