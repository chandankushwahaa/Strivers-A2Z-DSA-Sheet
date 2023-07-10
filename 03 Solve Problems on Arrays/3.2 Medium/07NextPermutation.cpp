#include <bits/stdc++.h>
using namespace std;

//TC-> O(N)  SC-> O(n)
vector<int> nextPer(vector<int> &arr, int n)
{
    next_permutation(arr.begin(), arr.end());
    return arr;
}

vector<int> nextPer2(vector<int> &arr, int n)
{
    // finding break point
    int indx = -1;
    for(int i=n-2; i>=0; i--){
        if(arr[i] < arr[i+1]){
            indx = i;
            break;
        }
    }
    if(indx == -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    // finding next greater elem and swap with arr[indx]
    for(int i=n-1; i>indx; i--){
        if(arr[i] > arr[indx]){
            swap(arr[i], arr[indx]);
            break;
        }
    }
    // reverse the right half
    reverse(arr.begin(), arr.end());

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

    vector<int> ans = nextPer(arr, n);

    printV(ans, n);
    cout<<endl;
    
    vector<int> ans2 = nextPer2(arr, n);

    printV(ans2, n);

    return 0;
}
