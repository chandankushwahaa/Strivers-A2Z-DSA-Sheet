#include <bits/stdc++.h>
using namespace std;

void Nby2Forest2(int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            // cout<<"*"<<" ";
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void N_Triangles3(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}
//  printing row numbers
void Triangle4(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< i <<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n=5;
    // cin>>t;
    Nby2Forest2(n);
    N_Triangles3(n);
    Triangle4(n);
    return 0;
}
