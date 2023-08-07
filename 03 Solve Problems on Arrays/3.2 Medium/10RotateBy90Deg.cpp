#include <bits/stdc++.h>
using namespace std;

// TC->O((N^2)  SC-> O(N^2)
vector<vector<int>> rotate(vector<vector<int>> &arr, int n)
{
    vector<vector<int>> ans(n, vector<int> (n,0));
    for(int i=0; i<n ;i++){
        for(int j=0; j<n; j++){
            ans[j][n-1-i] = arr[i][j];
        }
    }
    return ans;
}

// Optimal
// TC->O((N^2)+(N^2)  SC-> O(1)
vector<vector<int>> rotate2(vector<vector<int>> &arr, int n)
{
    // Transposing
    for(int i=0; i<n ;i++){
        for(int j=0; j<i; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
    // Reversing
    for(int i=0; i<n; i++){
        reverse(arr[i].begin(), arr[i].end());
    }
    return arr;
}

void printV(vector<vector<int>> v, int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    vector<vector<int>> arr =  {{1,2,3},
                                {4,5,6},
                                {7,8,9}};

    int n = arr.size();
    printV(arr, n);
    cout<<endl;
    vector<vector<int>> ans = rotate(arr, n);
    printV(ans, n);

    cout<<endl;
    vector<vector<int>> ans2 = rotate2(arr, n);
    printV(ans, n);

    return 0;
}
