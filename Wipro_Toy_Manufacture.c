#include<stdio.h>
void mergeSort(int A[],int lb,int up)
{
    int mid;
    if(lb<up){
        mid = (lb+up)/2;
    mergeSort(A,lb,mid);
    mergeSort(A,mid+1,up);
    merge(A,lb,mid,up);
    }

}
void merge(int A[],int lb,int mid, int up)
{
    int i,j,k,b[up];
    i = lb;
    j = mid+1;
    k = lb;
    while(i<=mid&&j<=up)
    {
        if(A[i]<=A[j])
        {
            b[k] = A[i];
            i++;
            k++;

        }
        else
        {
            b[k] = A[j];
            j++;
            k++;
        }

    }
    if (i>mid)
    {
        while(j<=up)
        {
            b[k] = A[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k] = A[i];
            i++;
            k++;
        }
    }
    for(i= lb;i<=up;i++)
    {
        A[i]=b[i];
    }
}
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n];
    int i;
    for(i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);

    printf("%d",arr[m-1]);
}
