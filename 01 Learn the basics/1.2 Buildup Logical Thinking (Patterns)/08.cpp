#include <iostream>
using namespace std;

void pattern21(int n)
{
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern22(int n)
{
    for(int i=0; i<2*n-1; i++){

        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n-2)-j;
            int down = (2*n-2) - i;

            cout<<(n-min(min(top, down), min(left, right)));
        }
        cout<<endl;
    }
}
int main()
{
    int n=5;
    pattern21(n);
    cout<<endl;
    pattern22(n);
    return 0;
}
