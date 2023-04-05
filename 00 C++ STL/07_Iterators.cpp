#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {2,3,4,5,6,7};
	for(int i=0; i<v.size(); ++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	// auto - used in iterators and automatically sees vector if it is int or float etc.

	// vector<int> :: iterator it;
	for(auto it = v.begin(); it != v.end(); ++it){
		cout<< (*it)<<" ";
	}
	cout<<endl;
	
	// actual value comes from vector because of '&'
	for(int &value : v){
		value++;
		// cout<< value<<" ";
	}
	cout<<endl;
	
	// copy of vector comes in value
	for(int value : v){
		cout<< value<<" ";
	}
	cout<<endl;

	vector<pair<int,int>> v_p = {{1,2},{2,3}};
	for(auto &value : v_p){
		cout<<value.first<<" "<<value.second<<endl;
	}
}