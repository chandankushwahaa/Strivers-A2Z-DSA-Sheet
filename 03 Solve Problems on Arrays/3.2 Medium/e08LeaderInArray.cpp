#include <bits/stdc++.h>
using namespace std;

//TC-> O(N)  SC-> O(N)
vector<int> LeaderArr(vector<int> &arr, int n)
{
    vector<int> ans;
    for(int i=0; i<n; i++){
        bool leader = true;
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[i]){
                leader = false;
                break;
            }
        }
        if(leader)
            ans.push_back(arr[i]);
    }
    return ans;
}
//TC-> O(N)  SC-> O(N)
vector<int> LeaderArr2(vector<int> &arr, int n)
{
    vector<int> ans;
    int maxi = arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--){
        if(arr[i] > maxi){
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }
    // sort(ans.begin(), ans.end());
    return arr;
}
void printV(vector<int> v)
{
    int n = v.size();
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> arr = {10,22,12,3,0,6};
    int n = arr.size();
    printV(arr);
    cout<<endl<<endl;

    // vector<int> ans = LeaderArr(arr, n);
    // printV(ans);

    cout<<endl;
    vector<int> ans2 = LeaderArr2(arr, n);
    printV(ans2);

    return 0;
}
