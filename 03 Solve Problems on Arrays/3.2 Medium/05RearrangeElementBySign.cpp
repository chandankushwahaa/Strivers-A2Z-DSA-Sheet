#include <bits/stdc++.h>
using namespace std;

//TC-> O(N)  SC-> O(n)
vector<int> RearrangeEle(vector<int> &arr, int n)
{
    vector<int> ans(n, 0);
    int pos =0 ;
    int neg  = 0;
    for(int i=0; i<n; i++){
        // fill -ve at odd indices
        if(arr[i] < 0)
        {
            ans[neg] = arr[i];
            neg += 2;
        }else{
            ans[pos] = arr[i];
            pos += 2;
        }
    }

    return ans;
}
void printV(vector<int> v, int n)
{
    for(int i=0; i<n; i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> arr = {3,1,-2,-5,2,-4};
    int n = arr.size();
    printV(arr, n);
    cout<<endl<<endl;

    vector<int> ans = RearrangeEle(arr, n);

    printV(ans, n);

    return 0;
}
