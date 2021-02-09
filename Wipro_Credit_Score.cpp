//5
//1 2 3 4 5
//3
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    cin>>arr[i];

    int sum;

    int product = INT_MAX;

    for(int i=0;i<n-1;i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(arr[i]*arr[j] < product)
            {
                product = arr[i] * arr[j];
                sum = arr[i] + arr[j];
            }
        }
    }

    cout<<abs(sum)<<endl;

    return 0;
}
