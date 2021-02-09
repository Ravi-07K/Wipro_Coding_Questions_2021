//12345
//3
//1
#include <stdio.h>
int main()
{
    long int n;
    scanf("%ld", &n);
    int k;
    scanf("%d", &k);
    int c=0;
    while(n)
    {
        if(k==n%10)
            c++;
        n=n/10;
    }
    printf("%d",c);
}
