//5
//1 2 3 4 5
//12
#include <stdio.h>
int main(){

    int n;
    scanf("%d",&n);

    int arr[n];
    int sum = 0;
    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int i;
    for( i = 1; i*i*i<sum; i++);

    if(i*i*i == sum){
        printf("Yes\n");
    }
    else{
        printf("%d",i*i*i-sum);
    }
    return 0;
}
