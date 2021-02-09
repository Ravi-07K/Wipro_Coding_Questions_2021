//RaviKumar
//ravikumar

#include<iostream>
using namespace std;
int main()
{
  string s;
  getline(cin, s) ;
   for(int i=0;s[i]!='\0';i++)
    {
        if(s[i] >='a' && s[i] <='z')
          s[i]-=32;

      if(s[i] >='A' && s[i] <='Z')
            s[i] +=32;

     cout<<s[i] ;
}
return 0;
}
