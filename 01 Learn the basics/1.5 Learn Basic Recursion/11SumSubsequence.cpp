#include <bits/stdc++.h>
using namespace std;



void sumSub(int index, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if(index == n){
        if(s == sum){
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
        }
        return ;
    }

    ds.push_back(arr[index]);
    s += arr[index];
// s = new sum , sum = existing sum
    sumSub(index+1, ds, s, sum, arr, n);

    s -= arr[index];
    ds.pop_back();

    // NOT PICK
    sumSub(index+1, ds, s, sum, arr, n);
}

// PRINT ONE SUBSEQUENCE
bool sumSubOne(int index, vector<int> &ds, int s, int sum, int arr[], int n)
{
    if(index == n){
        // condition satisfied
        if(s == sum){
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }
        // condition Not satisfied
        else return false;
    }

    ds.push_back(arr[index]);
    s += arr[index];

    if(sumSubOne(index+1, ds, s, sum, arr, n) == true){
        return true;
    }
    s -= arr[index];
    ds.pop_back();

    if(sumSubOne(index+1, ds, s, sum, arr, n) == true){
        return true;
    }

    return false;
}

// COUNT THE SUBSEQUENCE WITH SUM = K
int sumSubCount(int index, int s, int sum, int arr[], int n)
{
    if(index == n){
        if(s == sum)
            return 1;
        else
            return 0;
    }
    s += arr[index];

    int l = sumSubCount(index+1, s, sum, arr, n);

    s -= arr[index];

    int r = sumSubCount(index+1, s, sum, arr, n);

    return l+r;
}
int main()
{
    int arr[] = {1,2,1};
    int n = 3;
    int sum = 2;
    vector<int> ds;
    sumSub(0, ds, 0, sum, arr, n);
    cout<<endl<<endl;
    sumSubOne(0, ds, 0, sum, arr, n);

    cout<<endl<<endl;
    cout<<sumSubCount(0, 0, sum, arr, n);


    return 0;
}
