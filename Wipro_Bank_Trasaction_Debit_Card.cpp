//RaviKumar
//4
#include <bits/stdc++.h>
using namespace std;

bool isCredit(char c){
    return (c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='u' || c=='U' ||c=='o' || c=='O');
}

int func(string str){
    int n=str.length();
    int count=0;
    for(int i=1;i<n;i++){
        if(!isCredit(str[i]) && isCredit(str[i-1]))
            count++;
    }
    return count;
}
int main(){
    string str;
    cin>>str;
    cout<<func(str);
}
