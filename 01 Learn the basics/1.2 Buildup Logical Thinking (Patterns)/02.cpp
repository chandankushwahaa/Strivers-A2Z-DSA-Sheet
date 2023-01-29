#include <bits/stdc++.h>
using namespace std;

void Nby2Forest(int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            // cout<<"*"<<" ";
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void N_Triangles(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<< j <<" ";
        }
        cout<<endl;
    }
}
//  printing row numbers
void Triangle(int n)
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
    Nby2Forest(n);
    N_Triangles(n);
    Triangle(n);
    return 0;
}
