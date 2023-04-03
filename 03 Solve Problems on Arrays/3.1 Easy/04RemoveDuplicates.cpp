#include <bits/stdc++.h>
using namespace std;

// BruteForce
// TC = O(nlogn + n)
// SC = O(n)
int RemoveDuplicates(vector<int> &arr, int n)
{
    int index = 0;
    set<int> st;
    // nlogn
    for(int i=0; i<n; i++)
        st.insert(arr[i]);
    // n
    for(auto it : st){
        arr[index] = it;
        index++;
    }
    return index;
}

// Optimal
// TC = O(n)
// SC = O(1)
int RemoveDuplicates2(vector<int> &arr, int n)
{
    int i=0;
    for(int j=1; j<n; j++){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    vector<int> arr = {3,4,5,6,2,3,3};
    int n = arr.size();
    cout<<RemoveDuplicates(arr, n)<<endl;
    cout<<RemoveDuplicates2(arr, n)<<endl;


}
