//1234
//6

#include <stdio.h>
int main(void) {
    long long int n;
    scanf("%d",&n);
    int sum = 0;
    int r = 0;
    while(n>0){
        r = n%10;
        if(r%2==0){
            sum+=r;
        }
        n/=10;
    }
    printf("%d\n",sum);
  return 0;
}
