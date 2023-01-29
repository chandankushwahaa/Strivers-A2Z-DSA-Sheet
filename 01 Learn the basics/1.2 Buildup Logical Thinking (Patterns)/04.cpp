#include <bits/stdc++.h>
using namespace std;

void pattern7(int n)
{
    for(int i=0; i<n; i++){
        // space
        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
        //  star
        for(int j=1; j<=2*i+1; j++){
            cout<<"*";
        }
        // space
        for(int j=1; j<=n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern8(int n)
{
    for(int i=0; i<n; i++){
        // space
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        //  star
        for(int j=1; j<=2*n-(2*i+1); j++){
            cout<<"*";
        }
        // space
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n=5;
    // cin>>t;
    pattern7(n);
    cout<<endl;

    pattern8(n);
    cout<<endl;
// 9
    pattern1(n);
    pattern2(n);
    return 0;
}
