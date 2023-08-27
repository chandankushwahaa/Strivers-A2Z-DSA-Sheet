#include<bits/stdc++.h>
using namespace std;

// TC -> O(N^4)
// O(2 * no. of the quadruplets)
vector<vector<int>> fourSum(vector<int> &arr, int n, int target)
{
    set<vector<int>> st;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                for(int l=k+1; l<n; l++)
                {
                    long long sum = arr[i] + arr[j];
                    sum += arr[k];
                    sum += arr[l];
                    if(sum == target)
                    {
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

// vector<vector<int>> fourSum2(vector<int> &arr, int n, int target)
// {
//     set<vector<int>> st;
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++){
//             set<long,long> hashset;
//             for(int k=j+1; k<n; k++)
//             {
//                 long long sum = arr[i] + arr[j];
//                 sum += arr[k];
//                 long long fourth = target - sum;
//                 if(hashset.find(fourth) != hashset.end())
//                 {
//                     vector<int> temp = {arr[i], arr[j], arr[k], int(fourth)};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(arr[k]);
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }


vector<vector<int>> fourSum3(vector<int> &arr, int n, int target)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        // remove duplicate
        if(i >= 0 && arr[i] == arr[i-1])
            continue;
        for(int j=i+1; j<n; j++){
            // remove duplicate
            if(j >= i+1 && arr[j] == arr[j-1])
                continue;
            // moving 2 pointer
            int k = j+1;
            int l = n-1;
            while(k < l){
                long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];
                if(sum == target){
                    // vector<int> temp = {}
                    ans.push_back({arr[i], arr[j], arr[k], arr[l]});
                    k++;
                    l--;
                    // remove duplicate
                    while(k < l && arr[k] == arr[k-1])
                        k++;
                    while(k < l && arr[l] == arr[l+1])
                        l--;
                }
                else if(sum > 0)
                    l--;
                else
                    k++;
            }
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
    vector<int> arr = {1, 0, -1, 0, -2, 2};
    int n = arr.size();
    int target = 0;
    for(auto i : arr)
        cout<<i<<" ";

    cout<<endl;
    vector<vector<int>> ans = fourSum(arr, n, target);
    printV(ans);

    cout<<endl;
    // vector<vector<int>> ans2 = fourSum2(arr, n, target);
    // printV(ans2);

    cout<<endl;
    vector<vector<int>> ans3 = fourSum3(arr, n, target);
    printV(ans3);
    
    
    return 0;
}