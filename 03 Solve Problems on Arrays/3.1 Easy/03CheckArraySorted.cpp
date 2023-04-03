#include <bits/stdc++.h>
using namespace std;

// TC O(n)
bool Sorted(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1])
            return false;
    }
    return true;
}


int main()
{
    int arr[] = {3,4,5,6,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<Sorted(arr, n)<<endl;


}
