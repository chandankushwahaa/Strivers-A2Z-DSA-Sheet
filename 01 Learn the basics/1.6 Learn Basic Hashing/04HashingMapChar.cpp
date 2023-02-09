
#include <bits/stdc++.h>
using namespace std;

// Time - O(n+n) => 2n => n
int main()
{
    string s;
    cin>>s;

    // precompute

    map<char, int> m;
    for(int i=0; i<s.size(); i++){

        m[s[i]]++;
    }

    // map store all the values in sorted order
    for(auto it:m){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;

        // fetch
        cout<<m[c]<<endl;
    }
    return 0;
}
