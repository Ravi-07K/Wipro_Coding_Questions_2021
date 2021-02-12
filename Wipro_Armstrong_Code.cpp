
#include <bits/stdc++.h>
using namespace std;

int power(int x, unsigned int y)
{
    if( y == 0)
        return 1;
    if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    return x*power(x, y/2)*power(x, y/2);
}
int order(int x)
{
    int n = 0;
    while (x)
    {
        n++;
        x = x/10;
    }
    return n;
}
bool isArmstrong(int x)
{
    int n = order(x);
    int temp = x, sum = 0;
    while (temp)
    {
        int r = temp%10;
        sum += power(r, n);
        temp = temp/10;
    }
    return (sum == x);
}
int main()
{
    int n;
    cin>>n;
    int num=n;
    bool flag=isArmstrong(n);
    int total_sum=0,even_sum=0;
    while(num>0){
        int d=num%10;
        if(d%2==0)
            even_sum+=d;
        total_sum+=d;
        num/=10;
    }
    if(flag)
        cout<<even_sum;
    else
        cout<<total_sum-even_sum;
}
