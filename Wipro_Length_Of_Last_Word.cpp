//i am geniune developer
//9
#include<bits/stdc++.h>
using namespace std;
int game(string s){
  reverse(s.begin(), s.end());
  int i= 0;
  int count = 0;
  while(s[i]!= ' '){
    count++;
    i++;
  }
  return count;
}
int main(){
  string s;
  getline(cin,s);
  cout<<game(s);
}
