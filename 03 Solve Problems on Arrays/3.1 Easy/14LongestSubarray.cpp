#include <bits/stdc++.h>
using namespace std;

//TL  ~O(n^3)
int LongSubArray(vector<int> arr, int n, int k)
{
    int maxlength = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int sum = 0;
            for(k=i; k<j; k++){
                sum += arr[k];
                if(sum == k){
                    maxlength = max(maxlength, j-i+1);
                }
            }
        }
    }
    return maxlength;
}

int main()
{
    vector<int> arr = {7,1,6,0};
    int k = 7;
    int n = arr.size();

    cout<<LongSubArray(arr,n, k);

    return 0;
}
