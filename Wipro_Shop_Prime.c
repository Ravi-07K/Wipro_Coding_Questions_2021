//5
//3 6 4 7 8
//3 7 6 4 8

#include <stdio.h>
int prime(int n);
int main() {
    int n,i,c=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(!prime(a[i]))
        {b[c]=a[i];
        c+=1;}
    }
    for(i=0;i<n;i++)
    {
        if(prime(a[i]))
        {b[c]=a[i];
        c+=1;}
    }
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
    return 0;
}
int prime(int n)
{
 int i;
 for(i=2;i<=n/2;i++)
 {
  if(n%i!=0)
   continue;
  else
   return 1;
 }
 return 0;
}
