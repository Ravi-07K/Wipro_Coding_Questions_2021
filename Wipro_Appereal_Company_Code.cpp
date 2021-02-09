//5 3
//1 2 3 4 5
//0 1

#include<stdio.h>
int main(){
 int n,t,a[100];
 int count;
 scanf("%d %d",&n,&t);
 for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
 }
 for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
   if(t==a[i]+a[j]){
    printf("%d %d",i,j);
    count=count+1;
   }
  }
 }
 if(count==0){
  printf("-1");
 }
 return 0;
}
