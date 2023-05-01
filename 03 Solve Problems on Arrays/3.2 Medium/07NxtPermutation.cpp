#include <bits/stdc++.h>
using namespace std;

vector<int> nextPer(vector<int> &arr, int n)
{
    // STL inbuild function
    next_permutation(arr.begin(), arr.end());

    return arr;
}
vector<int> nextPer2(vector<int> &arr, int n)
{
    int ind = -1;
    // Find break point
    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    // Find next greater ele and swap with arr[ind]
    for(int i=n-1; i>ind; i--){
        if(arr[i] > arr[ind]){
            swap(arr[i], arr[ind]);
            break;
        }
    }
    // reverse the right half
    reverse(arr.begin()+ind+1, arr.end());

    return arr;
}
void printV(vector<int> v, int n)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> arr = {3,1,2};
    int n = arr.size();
    printV(arr, n);
    cout<<endl<<endl;

    vector<int> ans = nextPer(arr,n);
    printV(ans, ans.size());
    cout<<endl;
    vector<int> ans2 = nextPer2(arr,n);
    printV(ans2, ans2.size());

    return 0;
}
