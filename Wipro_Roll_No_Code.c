#include<stdio.h>
int main()
{
    long int n;
    int k,i,count=0,c,s;
    scanf("%ld %ld",&n,&k);
    c=n;
    s=n;
    while(n)
    {
        count++;
        n=n/10;
    }
     int a[count];
    i=count-1;
    while(s)
    {
        a[i]=s%10;
        s=s/10;
        i--;
    }
    for(i=k-1;i<count;i++)
        printf("%d",a[i]);
    for(i=0;i<k-1;i++)
        printf("%d",a[i]);
    return 0;
}
