#include <bits/stdc++.h>
using namespace std;

//TC-> O(N^3)  SC-> O(1)
int maxSubarr(vector<int> &arr, int n)
{
    int maxlength = INT_MIN;
    for(int i=0; i<n;i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++)
                sum += arr[k];

            maxlength = max(maxlength, sum);
        }
    }
    return maxlength;
}

// TC-> O(N^2) , SC-> O(1)
int maxSubarr2(vector<int> &arr, int n)
{
    int maxlength = INT_MIN;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            maxlength = max(maxlength, sum);
        }
    }

    return maxlength;
}

// Optimal (Kandane`s Algorithm)
// TC-> O(n) , SC-> O(1)
int maxSubarr3(vector<int> &arr, int n)
{
    int sum = 0;
    int maxlength = INT_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum > maxlength)
            maxlength = sum;

        if(sum < 0)
            sum = 0;
    }
    return maxlength;
}

void printV(vector<int> v, int n)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    int n = arr.size();
    printV(arr, n);
    cout<<endl<<endl;

    cout<<maxSubarr(arr,n)<<endl;
    cout<<maxSubarr2(arr,n)<<endl;
    cout<<maxSubarr3(arr,n)<<endl;

    return 0;
}
