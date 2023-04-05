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
    vector<int> v[N];
    for(int i=0; i<N; ++i){
        int n;
        cin>>n; // 3, 3, 2
        for(int j=0; j<n; ++j){
            int x;
            cin>>x;
            v[i].push_back(x); // 123, 345, 12
        }
    }
    for(int i=0; i<N; ++i){
        printVector(v[i]);
    }
    cout<< v[0][1];

    return 0;
}


