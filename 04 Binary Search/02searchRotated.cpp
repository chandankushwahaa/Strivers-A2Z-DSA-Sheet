#include <bits/stdc++.h>
using namespace std;

// O(N)
int search(vector<int>& nums, int x){
    for(int i=0; i<nums.size(); i++){
        if(nums[i] == x)
            return i;
    }
    return -1;
}

int search2(vector<int>& nums, int x){
    int low = 0, high = nums.size()-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(nums[mid] == x)
            return mid;
        else if(nums[mid] >= nums[low]){
            if(x >= nums[low] && x < nums[mid])
                high = mid-1;
            else
                low = mid+1;
        }
        else{
            if(x <= nums[high] && x > nums[mid])
                low = mid+1;
            else
                high = mid-1;
        }
    }
    return -1;

}
int main()
{
    vector<int> arr = {4,5,6,7,0,1,2};
    int x = 0;

    cout << search(arr, x) << endl;
    cout << search2(arr, x) << endl;

}