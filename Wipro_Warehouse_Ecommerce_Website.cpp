//123
//12
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N , count = 0;
    cin>>N;


    while(N)
    {
        if(N%2 ==0) N = N/2;
        else N= N-1;
        count++;
    }
    cout<<count<<endl;
}
