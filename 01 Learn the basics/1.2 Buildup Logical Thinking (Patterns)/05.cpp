#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    int start = 1;
    for(int i=0; i<n; i++){
        if(i % 2 ==0)
            start = 1;
        else
            start = 0;

        for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start = 1 - start;
        }

        cout<<endl;
    }
}

void pattern2(int n)
{
    int space = 2*(n-1);
    for(int i=1; i<=n; i++){
        // nums
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //  space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        // nums
        for(int j=i; j>=i; j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}

int main()
{
    int n=5;
    // cin>>n;
    // pattern1(n);
    cout<<endl;
    pattern2(n);
    return 0;
}
