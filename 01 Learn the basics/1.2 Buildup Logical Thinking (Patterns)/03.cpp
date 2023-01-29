#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i+1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

void pattern2(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}

void pattern3(int n)
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
    pattern1(n);
    pattern2(n);
    pattern3(n);
    return 0;
}
