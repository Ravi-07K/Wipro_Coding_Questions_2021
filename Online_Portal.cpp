#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int k=0;
    int v[n*m+1];
    int t=0;
    while(t<n){
    for(int i=t,j=0;i>=0 && j<=t;i--,j++)
    {
            v[k++]=a[i][j];
        //    cout<<v[k-1]<<' ';
    }t++;
    }
    t=1;
    while(t<m){
    for(int i=n-1,j=t;i>=t&& j<m;i--,j++)
    {
            v[k++]=a[i][j];
         //   cout<<v[k-1]<<' ';
    }t++;
    }
    int Q;
    cin>>Q;
    int x,f;
    while(Q--)
    {
        cin>>x;
        f=0;
        for(int i=0;i<n*m;i++)
        {
            if(v[i]==x)
            {
                cout<<i+1<<endl;
                f=1;
                break;
            }
        }
        if(f==0) cout<<-1<<endl;

    }

    return 0;
}

