//123
//1111011
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[1000]={0};
    int count = 0;
    while(n>0){
        int r = n%2;
        arr[count++]=r;
        n/=2;
    }
    for(int i = count-1; i>=0; i--){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}
