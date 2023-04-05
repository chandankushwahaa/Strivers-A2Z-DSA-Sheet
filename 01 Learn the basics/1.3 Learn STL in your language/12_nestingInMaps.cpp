#include <bits/stdc++.h>
using namespace std;

/*
input:
3
a b 4
1 2 3 4
c d 2
1 2
d f 3
2 3 4
*/

int main()
{
	map<pair<string, string>, vector<int>> m;
	int n;
	cin>>n;     // 3
	for(int i=0; i<n; ++i){
		string fn, ln;
		int ct;
		cin>>fn>>ln>>ct;   // a b 4, c d 2, d f 3
		for(int j=0; j<ct; ++j){
			int x;
			cin>>x; // 1 2 3 4, 1 2, 2 3 4
			m[{fn,ln}].push_back(x);
		}
	}
	for(auto &pr:m){
		auto &full_name = pr.first;
		auto &list = pr.second;
		cout<<full_name.first <<" "<<full_name.second<<endl;
		cout<<list.size()<<endl;
		for(auto &element : list){
			cout<<element<<" ";
		}
		cout<<endl;
	}
}