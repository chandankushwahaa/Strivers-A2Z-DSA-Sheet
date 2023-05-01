#include <bits/stdc++.h>
using namespace std;

vector<int> leaderArr(vector<int> &arr, int n)
{

}
void printV(vector<int> v, int n)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> arr = {10,22,12,3,0,6};
    int n = arr.size();
    printV(arr, n);
    cout<<endl<<endl;

    vector<int> ans = leaderArr(arr,n);
    printV(ans, ans.size());
    cout<<endl;


    return 0;
}
