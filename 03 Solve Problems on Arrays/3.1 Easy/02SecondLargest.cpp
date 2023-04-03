#include <bits/stdc++.h>
using namespace std;

// Brute Force Approch
// TC = O(nlogn+n)
int SecondLargest(int arr[], int n)
{
    // O(Nlogn)
    sort(arr, arr+n);
    int large = arr[n-1];
    // O(n)
    for(int i=n-2; i>=0; i--){
        if(arr[i] != large){
            large = arr[i];
            break;
        }
        // else return -1;
    }
    return large;
}

// Better Approch
// TC = O(2n)
int SecondLargest2(int arr[], int n)
{
    // O(n)
    int large = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] > large){
            large = arr[i];
        }
    }

    // O(n)
    int sLargest = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > sLargest && arr[i] != large)
            sLargest = arr[i];
        // else return -1;
    }
    return sLargest;
}

// Optimal Approch
int SecondLargest3(int arr[], int n)
{
    int large = arr[0];
    int sLargest = INT_MIN;
    for(int i=1; i<n; i++){
        if(arr[i] > large){
            sLargest = large;
            large = arr[i];
        }
        else if(arr[i] < large && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int SecondSmallest(int arr[], int n)
{
    int small = arr[0];
    int sSmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(arr[i] < small){
            sSmallest = small;
            small = arr[i];
        }
        else if(arr[i] != small && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}
int main()
{
    int arr[] = {1,2,4,7,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<SecondLargest(arr, n)<<endl;
    cout<<SecondLargest2(arr, n)<<endl;
    cout<<SecondLargest3(arr, n)<<endl;
    cout<<SecondSmallest(arr, n)<<endl;

}
