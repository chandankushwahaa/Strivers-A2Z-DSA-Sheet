#include <bits/stdc++.h>
using namespace std;

void nForest1(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    //  Test Cases
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        nForest1(n);
    }

    return 0;
}
