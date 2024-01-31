#include <bits/stdc++.h>
using namespace std;

int peak(vector<int> &nums)
{
    for(int i=0; i<nums.size(); i++){
        if((i==0 || nums[i-1]< nums[i]) && (i == nums.size()-1 || nums[i] > nums[i+1]))
            return i;
    }
    return -1;
}


int main()
{
    // vector<int> arr = {1,2,3,4,5,6,7,8,5,1};
    vector<int> arr = {1,2,3,4,5};

    cout << peak(arr) << endl;
}