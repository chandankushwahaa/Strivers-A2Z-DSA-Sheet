#include <bits/stdc++.h>
using namespace std;
// Longest subArray with SUM 0


int longSubarrZero(vector<int> &arr, int n)
{
    int maxlen = 0;
    unordered_map<int,int> sumIndexMap;
    int sum = 0;;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(arr[i] == 0)
            maxlen = i+1;
        else if(sumIndexMap.find(sum) != sumIndexMap.end())
            maxlen = max(maxlen, i-sumIndexMap[sum]);
        else
            sumIndexMap[sum] = i;
    }
    return maxlen;
}

int longSubarrZero2(vector<int> &arr, int n)
{
    unordered_map<int,int> mpp;
    int maxi = 0;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum == 0)
            maxi = i+1;
        else
        {
            if(mpp.find(sum) != mpp.end())
                maxi = max(maxi, i-mpp[sum]);
            else
                mpp[sum] = i;
        }
    }
    return maxi;
}
int main()
{
    vector<int> arr = {1,-1,0,0,1};
    int n = arr.size();

    cout<<longSubarrZero(arr, n)<<endl;
    cout<<longSubarrZero2(arr, n)<<endl;
}