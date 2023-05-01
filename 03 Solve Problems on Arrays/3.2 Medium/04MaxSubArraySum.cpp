#include <bits/stdc++.h>
using namespace std;

//TC-> O(N^3)  SC-> O(1)
int maxSubArrSum(vector<int> &arr, int n)
{
    int maxlength = INT_MIN;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(int k=i; k<=j; k++){
                sum += arr[k];
            maxlength = max(sum, maxlength);
            }
        }
    }
    return maxlength;
}

//TC-> O(N^2)  SC-> O(1)
int maxSubArrSum2(vector<int> &arr, int n)
{
    int maxlength = INT_MIN;
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
        maxlength = max(sum, maxlength);
        }
    }
    return maxlength;
}

// Optimal (Kadane's Algorithm)   TC->O(n)
int maxSubArrSum3(vector<int> &arr, int n)
{
    int sum = 0;
    int maxlength = INT_MIN;

    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum > maxlength){
            maxlength = sum;
        }

        if(sum < 0 ){
            sum = 0;
        }
    }
    return maxlength;
}
int maxSubArrSum4(vector<int> &arr, int n)
{
    int sum = 0;
    int maxlength = INT_MIN;
    int ansStart = -1;
    int ansEnd = -1;
    int start;

    for(int i=0; i<n; i++){
        if(sum == 0)
            start = i;
        sum += arr[i];

        if(sum > maxlength){
            maxlength = sum;
            ansStart = start, ansEnd=i;
        }

        if(sum < 0 ){
            sum = 0;
        }
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

    cout<<maxSubArrSum(arr,n)<<endl;
    cout<<maxSubArrSum2(arr,n)<<endl;
    cout<<maxSubArrSum3(arr,n)<<endl;
    cout<<maxSubArrSum4(arr,n)<<endl;

    return 0;
}
