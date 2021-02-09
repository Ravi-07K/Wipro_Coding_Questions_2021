#include <bits/stdc++.h>
using namespace std;
bool armstron(long long int n,string s,int x)
{
    long long int sum=0;
    for(int i=0;i<x;i++)
    {    int a=s[i]-'0';
        sum+=pow(a,x);
    }
    if(sum==n)
    {
        return true;
    }
    return false;
}
int main() {
    long long int n;
    cin>>n;
    string s=to_string(n);
    int n1=s.length();
    int sum=0;
    if(armstron(n,s,n1))
    {
        for(int i=0;i<n1;i++)
        {
            int x=s[i]-'0';
            if(x%2==0)
            {
                sum+=x;
            }
        }
        cout<<sum;
    }
    else
    {
    for(int i=0;i<n1;i++)
    {
        int x1=s[i]-'0';
        if(x1%2!=0)
        {
            sum+=x1;
        }
    }
    cout<<sum;
    }
    return 0;
}
