#include <bits/stdc++.h>
using namespace std;

// TC-> O(NlogN + O(2N))
vector<vector<int>> mergeOver(vector<vector<int>> &arr, int n)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    
    for(int i=0; i<n; i++){
        int start = arr[i][0];
        int end = arr[i][1];
        // skip all merge intervals
        if(!ans.empty() && end <= ans.back()[1])
            continue;
        // check for rest interval
        for(int j=i+1; j<n; j++){
            if(end >= arr[j][0]){
                end = max(end, arr[j][1]);
                i++;
            }
            else
                break;
        }
        ans.push_back({start, end});
    }
    return ans;
}


// TC-> O(NlogN + O(N))   SC-> O(N)
vector<vector<int>> mergeOver2(vector<vector<int>> &arr, int n)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    
    for(int i=0; i<n; i++)
    {
        // curr interval do not lie
        if(ans.empty() || arr[i][0] > ans.back()[1])
            ans.push_back(arr[i]);

        // curr interval lie
        else    
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
    }
    return ans;
}


int main()
{
    vector<vector<int>> arr = {{1, 3}, {2,6}, {8, 9}, {9,11}, {8,10}, {2, 4}, {15, 18}, {16,17}};
    int n = arr.size();
    vector<vector<int>> ans = mergeOver(arr, n);
    for (auto it : ans) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl<<endl;


    vector<vector<int>> ans2 = mergeOver2(arr, n);
    for (auto it : ans2) {
        cout << "[" << it[0] << ", " << it[1] << "] ";
    }
    cout << endl;
    return 0;
}