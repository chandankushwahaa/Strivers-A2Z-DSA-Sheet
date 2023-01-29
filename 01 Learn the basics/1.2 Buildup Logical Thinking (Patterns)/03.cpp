#include <bits/stdc++.h>
using namespace std;

void pattern5(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern6(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}

void pattern7(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<< i <<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n=5;
    // cin>>t;
    pattern5(n);
    pattern6(n);
    pattern7(n);
    return 0;
}
