#include <bits/stdc++.h>
using namespace std;

int cntSubarraySumK(vector<int> &nums, int k)
{
    int n = nums.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            if ((sum += nums[j]) == k)
                cnt++;
        }
    }
    return cnt;
}

int cntSubarraySumK2(vector<int> &nums, int k)
{
    int n = nums.size();
    int cnt = 0;
    unordered_map<int, int> mp;
    int sum = 0;
    mp[0] = 1;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (mp.find(sum - k) != mp.end())
            cnt += mp[sum - k];
        mp[sum]++;
    }
    return cnt;
}

int main()
{
    vector<int> nums = {1,2,3,-3,1,1,1,4,2,-3};
    int k = 3;
    cout << cntSubarraySumK2(nums, k) << endl;
    cout << cntSubarraySumK(nums, k) << endl;

    return 0;
}