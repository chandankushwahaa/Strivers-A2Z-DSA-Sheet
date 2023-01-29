#include <bits/stdc++.h>
using namespace std;

void pattern14(int n)
{
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<= 'A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern15(int n)
{
    for(int i=0; i<=n; i++){
        for(char ch='A'; ch<= 'A'+(n-i-1); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern16(int n)
{
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void pattern17(int n)
{
    for(int i=0; i<n; i++){

        // space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        // alphabat
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
             cout<<ch;
             if(j <= breakpoint) ch++;
             else ch--;
        }
        // space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern18(int n)
{
    for(int i=0; i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n=5;
    // cin>>n;
    pattern14(n);
    cout<<endl;
    pattern15(n);
    cout<<endl;
    pattern16(n);
    cout<<endl;
    pattern17(n);
    cout<<endl;
    pattern18(n);
    return 0;
}
