#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i){
        // v.size() -> O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    vector<int> v1(10,3);
    v1.push_back(7);
    printVector(v1);
    v1.pop_back();
    printVector(v1);

// copying vector
    vector<int> v2 = v1;   // time - O(n)
    v2.push_back(5);
    printVector(v1);
    printVector(v2);

// Taking input from the user
    cout<<endl;
    vector<int> v;
    int n;
    cin>>n;  // 4
    for(int i=0; i<n; ++i){
        int x;
        cin>>x;  // 1 2 3 4 
        v.push_back(x);
    }
    printVector(v);
}
