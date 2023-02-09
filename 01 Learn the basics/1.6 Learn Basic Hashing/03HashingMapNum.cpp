
#include <bits/stdc++.h>
using namespace std;

// Time - O(n+n) => 2n => n
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // precompute
    map<long, long> m;
    for(int i=0; i<n; i++){

        m[arr[i]]++;
    }

    // map store all the values in sorted order
    for(auto it:m){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        // fetch
        cout<<m[number]<<endl;
    }
    return 0;
}
