//1234    1234-4321
//-3087
#include<iostream>
using namespace std;

int main(){

        int num, reverse=0, rem;
        //cout<<“Enter a number: “;
        cin>>num;
        int temp = num;

        do
        {
            rem=num%10;
            reverse=reverse*10+rem;
            num/=10;
        }while(num!=0);
        //output
       // cout<<reverse;
        //cout<<temp;
        cout<<(temp-reverse);
    return 0;
}

