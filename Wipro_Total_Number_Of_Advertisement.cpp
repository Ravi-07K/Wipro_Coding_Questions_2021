
#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;

   int count = 0;

   while(n!=0)
   {
       int temp = n % 10;
       if(temp%2 == 0)
       count += temp;

       n /= 10;
   }

   cout<<count<<endl;

    return 0;
}
