#include <bits/stdc++.h>
using namespace std;

// BruteForce
void leftRotate(int arr[], int k, int n)
{
    k = k % n;
    int temp[k];
    // storing temp elements
    for(int i=0; i<k; i++){
        temp[i] = arr[i];
    }
// shifting the elem
    for(int i=k; i<n; i++){
        arr[i-k] = arr[i];
    }
// pushing temp ele at the end
    int j = 0;
    for(int i=n-k; i<n; i++){
        arr[i] = temp[j];
        j++;

        // arr[i] = temp[i-(n-k)];

    }
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);

    leftRotate(arr,k, n);
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }

    return 0;
}
