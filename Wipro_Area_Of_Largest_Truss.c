#include<stdio.h>
int main()
{
    int  b1,h1,b2,h2,area1,area2;
    scanf("%d %d %d %d",&b1,&h1,&b2,&h2);
    area1=(b1*h1)/2;
    area2=(b2*h2)/2;
    if(area1>area2)
    printf("%d",area1);
    else
        printf("%d",area2);
    return 0;
}
