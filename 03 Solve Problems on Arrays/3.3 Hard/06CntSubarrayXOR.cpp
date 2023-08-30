#include<bits/stdc++.h>
using namespace std;

// TC-> O(n^3)
int XORsubArray(vector<int> &arr, int n, int k)
{
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++){
            int XOR = 0;
            for(int k=i; k<=j; k++)
                XOR = XOR ^ arr[k];
            
            if(XOR == k)
                cnt++;
        }
    }
    return cnt;
}

// TC-> O(n^2)
int XORsubArray2(vector<int> &arr, int n, int k)
{
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        int XOR = 0;
        for(int j=i; j<n; j++){
            XOR = XOR ^ arr[j];
            
            if(XOR == k)
                cnt++;
        }
    }
    return cnt;
}

// TC-> O(n) / O(NlogN)  SC-> O(n) wrst case
int XORsubArray3(vector<int> &arr, int n, int k)
{
    int cnt = 0;
    unordered_map<int, int> mp;
    int XOR = 0;
    for(int i=0; i<n; i++)
    {
        XOR = XOR ^ arr[i];
        if(XOR == k)
            cnt++;
        
        if(mp.find(XOR ^ k) != mp.end())
            cnt += mp[XOR ^ k];
        
        mp[XOR]++;
    }
    return cnt;
}

int main()
{
    vector<int> arr = {4,2,2,6,4};
    int n = arr.size();
    int k = 6;

    cout<<XORsubArray(arr, n, k)<<endl;
    cout<<XORsubArray2(arr, n, k)<<endl;
    cout<<XORsubArray2(arr, n, k)<<endl;

    return 0;
}