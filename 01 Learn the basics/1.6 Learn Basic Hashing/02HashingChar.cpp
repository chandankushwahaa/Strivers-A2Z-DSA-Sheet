/*
Input:
abcdegsavf
5
a
b
c
v
z

NOTE:
In case of number we try to hash using array we can atMAX store till 10^7.
10^9, 10^12, 10^15, etc.. we cannot hash using arrays to solve this in C++ we use STL(map, hash map).
*/
#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    // precompute
    //  In character there is at MAX 256 so we can directly use 256 as a Hash
    int hashh[256] = {0};

    for(int i=0; i<s.size(); i++){
        // hashh[s[i]-'a']++;
        hashh[s[i]]++;
    }

    int q;
    cin>>q;

    while(q--){
        char c;
        cin>>c;
        // fetch
        // cout<<hashh[c-'a']<<endl;
        cout<<hashh[c]<<endl;
    }

    return 0;
}
