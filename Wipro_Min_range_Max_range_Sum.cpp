#include<iostream>
using namespace std;
typedef long l;

l totalSum(l listSize, l minRange, l maxRange, l arr[]) {
 l res = 0;
 for(l i = minRange - 1; i < maxRange; i++) {
  res += arr[i];
 }

 return res;
}

int main() {
 l listSize, minRange, maxRange;
 cin>>listSize>>minRange>>maxRange;
 l arr[listSize],i;
 for(i = 0; i < listSize; i++)
  cin>>arr[i];
 cout<<totalSum(listSize,minRange,maxRange,arr);

 return 0;

}
