/*
Input:
5
1 3 2 1 3
5
1
4
2
3
12
*/
// Time - O(n*n)
#include <bits/stdc++.h>
using namespace std;

int hashh[10000000];    // globally -> arr[10^7]

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // precompute
    // int hash[100000] = {0};  inside main ->arr[10^6]
    for(int i=0; i<n; i++){
        hashh[arr[i]] += 1;
    }


    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch

        cout<<hashh[number]<<endl;
    }
    return 0;
}
