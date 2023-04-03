#include<bits/stdc++.h>
using namespace std;


int linearSearch(vector<int> arr, int n, int k)
{
    for(int i=0; i<n; i++){
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {6, 7, 8, 4, 1};
    int n = arr.size();
    int k = 8;

    cout<<linearSearch(arr, n, k);


    return 0;
}
