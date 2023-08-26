#include <bits/stdc++.h>
using namespace std;

// TC -> O(N^2)  SC-> O(1)
vector<int> majorityElement(vector<int> &arr, int n)
{
    vector<int> ans;
    for(int i=0; i<n; i++){
        if(ans.size() == 0 || ans[0] != arr[i]){
            int cnt = 0;
            for(int j=0; j<n; j++){
                if(arr[j] == arr[i]){
                    cnt++;
                }
            }
            if(cnt > (n/3))
                ans.push_back(arr[i]);
        }
        if(ans.size() == 2)
                break;
    }
    return ans;
}

// TC -> O(N*logN)  SC-> O(n)
vector<int> majorityElement2(vector<int> &arr, int n)
{
    vector<int> ans;
    map<int,int> mp;        // O(logN)
    int mini = int(n/3) + 1;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        if(mp[arr[i]] == mini)
            ans.push_back(arr[i]);
        
        if(ans.size() == 2)
            break;
    }
    return ans;
}

// TC->O(2N)  SC-> O(1)-it store only 2 element which is so small that it consider as O(1)
vector<int> majorityElement3(vector<int> &arr, int n)
{
    int cnt1 = 0;
    int cnt2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;
    for(int i=0; i<n; i++)
    {
        if(cnt1 == 0 && ele2 != arr[i]){
            cnt1 = 1;
            ele1 = arr[i];
        }
        else if(cnt2 == 0 && ele1 != arr[i]){
            cnt2 = 1;
            ele2 = arr[i];
        }
        else if(arr[i] == ele1)
            cnt1++;
        else if(arr[i] == ele2)
            cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
    }
    vector<int> ans;
    // checking if stored element of ele1 and ele2 are majority
    cnt1=0; cnt2=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == ele1)
            cnt1++;
        if(arr[i] == ele2)
            cnt2++;
    }
    int mini = int(n/3) + 1;
    if(cnt1 >= mini)
        ans.push_back(ele1);
    if(cnt2 >= mini)
        ans.push_back(ele2);

    // sort(ans.begin(), ans.end());
    return ans;
}
void printV(vector<int> &arr)
{
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {3, 1, 2, 3, 2, 2, 2 ,3, 3, 4};
    int n = arr.size();
    printV(arr);
    vector<int> ans = majorityElement(arr, n);
    cout<<endl;
    printV(ans);

    vector<int> ans2 = majorityElement2(arr, n);
    cout<<endl;
    printV(ans2);

    vector<int> ans3 = majorityElement3(arr, n);
    cout<<endl;
    printV(ans3);
    
    return 0;
}