#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v)
{
    cout<<"size:"<<v.size()<<endl;
    for(int i=0; i<v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int N;
    cin>>N; //3
    vector<vector<int>> v;
    for(int i=0; i<N; ++i){
        int n;
        cin>>n; // 3, 3, 2
        vector<int> temp;
        for(int j=0; j<n; ++j){
            int x;
            cin>>x;  // 123, 234, 12
            temp.push_back(x);
        }
        v.push_back(temp); 
    }
    v[0].push_back(10);
    //empty vector
    v.push_back(vector<int> ());


    for(int i=0; i<v.size(); ++i){
        printVector(v[i]);
    }
    cout<< v[0][1];

    return 0;
}


