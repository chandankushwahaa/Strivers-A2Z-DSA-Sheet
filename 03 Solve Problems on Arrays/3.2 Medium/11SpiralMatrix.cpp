#include <bits/stdc++.h>
using namespace std;

// TC->O((N^2)  SC-> O(N^2)
vector<int> spiralMatrix(vector<vector<int>> &arr, int n)
{
    vector<int> ans;
    int m = arr[0].size();
    int top=0;
    int left = 0;
    int right = n-1;
    int bottom = m-1;

    while(top <= bottom && left <= right)
    {
        // left to right
        for(int i=left; i<=right; i++)
            ans.push_back(arr[top][i]);
        top++;

        // top to bottom
        for(int i=top; i<= bottom; i++)
            ans.push_back(arr[i][right]);
        right--;

        // right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                ans.push_back(arr[bottom][i]);
          bottom--;
        }

        // bottom to top.
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                ans.push_back(arr[i][left]);
          left++;
        }
    }
    return ans;
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

void printV2(vector<int> v)
{
    for(int i=0; i<v.size(); i++)
            cout<<v[i]<<" ";
    cout<<endl;
}

int main()
{
    vector<vector<int>> arr =  {{1,2,3},
                                {4,5,6},
                                {7,8,9}};

    int n = arr.size();
    printV(arr, n);
    cout<<endl;
    vector<int> ans = spiralMatrix(arr, n);
    printV2(ans);

    return 0;
}
