#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m)
{
	cout<<m.size() <<endl;
	for(auto &pr : m){			// O(log(n))
		cout<<pr.first<<" "<<pr.second<<endl;
	}
}

int main()
{
	// map store value in sorted order
	map<int, string> m;
	m[1] = "abc";		// O(log(n))
	m[5] = "cdc";
	m[3] = "acd";

	m.insert({4, "afg"});

	// normal printing
	// map<int, string> :: iterator it;
	// for(it = m.begin(); it != m.end(); ++it){
	// 	cout<<(it->first)<<" "<<(it->second)<<endl;
	// }
	cout<<endl;

	// find any value in map
	auto it = m.find(3);    // O(log(n))
	if(it == m.end()){
		cout<<"No value";
	}else{
		cout<<(it->first) <<" "<< (it->second)<<endl;
	}
	
	// for deleting
	m.erase(3);   // O(log(n))

	// auto it = m.find(7);
	if(it != m.end())
		m.erase(it);

	// to clear map
	m.clear();
	print(m);

}


