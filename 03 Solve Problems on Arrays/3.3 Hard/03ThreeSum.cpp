#include <bits/stdc++.h>
using namespace std;

// TC -> O(n^3* log(no. of unique triplets)) 
// SC -> O(2* log(no. of unique triplets))
vector<vector<int>> threeSum(vector<int> &arr, int n)
{
    set<vector<int>> st;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == 0) {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }

    //store the st elements in the ans
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// TC -> O(n^2* log(no. of unique triplets)) 
// SC -> O(2* log(no. of unique triplets))
vector<vector<int>> threeSum2(vector<int> &arr, int n)
{
    set<vector<int>> st;
    for(int i=0; i<n; i++)
    {
        set<int> hashset;
        for(int j=i+1; j<n; j++)
        {
            int third = -(arr[i] + arr[j]);
            // find the element in the set
            if(hashset.find(third) != hashset.end())
            {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            else
            {
                hashset.insert(arr[j]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}
// TC -> O(NlogN)+O(N2)
vector<vector<int>> threeSum3(vector<int> &arr, int n)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++)
    {
        // remove duplicate
        if(i != 0 && arr[i] == arr[i-1])
            continue;
        // moving 2 pointer
        int j = i+1;
        int k = n-1;
        while(j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if(sum == 0)
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
                // remove duplicate
                while(j < k && arr[j] == arr[j-1])
                    j++;
                while(j < k && arr[k] == arr[k+1])
                    k--;
            }
            else if(sum > 0)
                k--;
            else
                j++;
        }
    }
    return ans;
}
void printV(vector<vector<int>> &arr)
{
    for (auto it : arr)
    {   cout<<"[";
        for (auto i : it) {
            cout << i << " ";
        }cout<<"]";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    int target = 0;
    for(auto i : arr)
        cout<<i<<" ";

    cout<<endl;
    vector<vector<int>> ans = threeSum(arr, n);
    printV(ans);

    cout<<endl;
    vector<vector<int>> ans2 = threeSum2(arr, n);
    printV(ans2);

    cout<<endl;
    vector<vector<int>> ans3 = threeSum3(arr, n);
    printV(ans3);
    return 0;
}