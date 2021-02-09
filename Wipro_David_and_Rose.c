//5
//1 2 3 4 5
//3 5
//1 2 3 0 5

#include<stdio.h>
#include<math.h>
int main()
{
 int n,a[100],p,k,temp,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 scanf("%d %d",&p,&k);
 temp = a[k];
 a[k] = a[p];
 a[p]  = temp;
 for(i=0;i<n;i++)
 {
 printf("%d ",a[i]);
}
return 0;
}


