#include <bits/stdc++.h>
using namespace std;

//TC-> O(N^2)  SC-> O(1)
int majorityElement(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            // counting the frequency of arr[i]
            if (arr[j] == arr[i]) {
                cnt++;
            }
    }

    // check if frquency is greater than n/2:
    if (cnt > (n / 2))
        return arr[i];
    }

    return -1;
}

// TC-> O(N*logN) + O(N) , SC-> O(N)
int majorityElement2(vector<int> &arr, int n)
{

    map<int, int> mpp;

    //storing the elements with its occurnce:
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    //searching majority element:
    for (auto it : mpp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }

    return -1;
}

// Optimal (Moore's Voting Algorithm)
int majorityElement3(vector<int> &arr, int n)
{
    int cnt = 0;
    int ele;
    // O(N)
    for(int i=0; i<n; i++){
        if(cnt == 0){
            cnt = 1;
            ele = arr[i];
        }
        else if(ele == arr[i])
            cnt++;
        else
            cnt--;
    }

    // checking for majorityElement
    int cnt1 =0 ;
    // O(N)
    for(int i=0; i<n; i++){
        if(arr[i] == ele)
            cnt1++;
    }

    if (cnt1 > (n/2))
        return ele;

    return -1;
}

void printV(vector<int> v, int n)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> arr = {7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int n = arr.size();
    printV(arr, n);
    cout<<endl<<endl;

    cout<<majorityElement(arr,n)<<endl;
    cout<<majorityElement2(arr,n)<<endl;
    cout<<majorityElement3(arr,n)<<endl;

    return 0;
}
