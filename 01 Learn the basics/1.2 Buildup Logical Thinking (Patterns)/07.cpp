#include <bits/stdc++.h>
using namespace std;

void pattern19(int n)
{
    int space = 0;
    for(int i=0; i<n; i++){
        // stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        // space
        for(int j=0; j<space; j++){
            cout<<" ";
        }

        // stars
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        space += 2;
        cout<<endl;
    }
    // 2nd Half
    space = 2*n-2;
    for(int i=1; i<=n; i++){
        // stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        // space
        for(int j=0; j<space; j++){
            cout<<" ";
        }

        // stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        space -= 2;
        cout<<endl;
    }

}

void pattern20(int n)
{
    int space = 2*n-2;
    for(int i=1; i<=2*n-1; i++){

        int stars = i;
        if(i>n)
            stars = 2*n-i;
        // stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        // space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        // stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n)
            space -= 2;
        else
            space += 2;

    }
}
int main()
{
    int n=5;
    // cin>>n;
    pattern19(n);
    cout<<endl;
    pattern20(n);
    cout<<endl;
    return 0;
}
