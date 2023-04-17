#include <bits/stdc++.h>
using namespace std;

// BruteForce Approch
vector<int> twoSum(vector<int> &arr, int n, int target)
{
    // TC O(n^2)
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { -1, -1};
}

// Better Approch(Usign Hashing)
vector<int> twoSum2(vector<int> &arr, int n, int target)
{
    // O(nlongn) -> mp
    // O(n)    -> unordered map
    unordered_map<int,int> mp;
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int more = target - num;
        if(mp.find(more) != mp.end())
            return {mp[more], i};

        mp[num] = i;
    }
    return { -1, -1};
}

// Optimal Approch (two Pointer)
string twoSum3(vector<int> &arr, int n, int target)
{
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = n-1;
    while(left < right){
        int sum = arr[left] + arr[right];

        if(sum == target)
            return "YES";

        else if(sum < target)
            left++;
        else
            right--;
    }
    return "NO";
}
int main()
{

    vector<int> arr = {2, 6, 5, 8, 11, 20};
    int n = arr.size();
    int target = 22;

    vector<int> ans = twoSum(arr, n, target);
    cout << ans[0] <<" "<< ans[1]<< endl;

    cout<<endl;
    vector<int> ans2 = twoSum2(arr, n, target);
    cout << ans[0] <<" "<< ans[1]<< endl;

    cout<<endl;
    string ans3 = twoSum3(arr, n, target);
    // cout << ans[0] <<" "<< ans[1]<< endl;
    cout<<ans3<<endl;
    return 0;
}
