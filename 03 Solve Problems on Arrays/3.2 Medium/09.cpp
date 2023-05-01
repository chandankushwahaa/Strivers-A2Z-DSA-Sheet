#include <bits/stdc++.h>
using namespace std;

vector<int> nextPer(vector<int> &arr, int n)
{

}
void printV(vector<int> v, int n)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> arr = {3,1,2};
    int n = arr.size();
    printV(arr, n);
    cout<<endl<<endl;

    vector<int> ans = nextPer(arr,n);
    printV(ans, ans.size());
    cout<<endl;


    return 0;
}
