//1234
//J
#include <stdio.h>
int value(int n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main(void) {

    long long int n;
    scanf("%lld",&n);
    int r = value(n);
    while(r>26){
        r = value(r);
    }
    printf("%c\n",'A' + r - 1);
  return 0;
}
