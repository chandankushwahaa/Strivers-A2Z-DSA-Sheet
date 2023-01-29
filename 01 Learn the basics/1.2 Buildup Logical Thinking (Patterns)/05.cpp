#include <bits/stdc++.h>
using namespace std;


void pattern10(int n)
{
    for(int i=1; i<=2*n-1; i++){
        int star = i;
        if(i>n)
            star = 2*n-i;
        for(int j=1; j<=star; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern11(int n)
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

void pattern12(int n)
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
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}

void pattern13(int n)
{
    int num = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<num<<" ";
            num += 1;
        }
        cout<<endl;
    }
}
int main()
{
    int n=5;
    // cin>>n;
    pattern10(n);
    cout<<endl;
    pattern11(n);
    cout<<endl;
    pattern12(n);
    cout<<endl;
    pattern13(n);
    return 0;
}
