#include <bits/stdc++.h>
using namespace std;

// TC O(nlogn)
int LargestEleBrute(int arr[], int n)
{
    sort(arr, arr+n);
    return arr[n-1];
}

// TC O(n)
int LargestEleOptimal(int arr[], int n)
{
    int larg = arr[0];
    for(int i=1; i<n; i++){
        if(arr[i] > larg){
            larg = arr[i];
        }
    }
    return larg;
}

int main()
{
    int arr[] = {3,2,1,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<LargestEleBrute(arr, n)<<endl;
    cout<<LargestEleOptimal(arr, n)<<endl;

}
