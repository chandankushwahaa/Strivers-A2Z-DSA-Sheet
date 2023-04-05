#include <bits/stdc++.h>
using namespace	std;

void print(multiset<string> &s)
{
	// printed in sorted order
	for(auto it = s.begin(); it != s.end(); ++it){
		cout<<(*it)<<endl;
	}
}

int main()
{
	// it uses red black tree
	multiset<string> s; 
	s.insert("abc"); 	// O(log(n))
	s.insert("bcd");
	s.insert("abc");
	s.insert("zyx");

	// it deletes first value of iterator
	auto it = s.find("abc");	// O(log(n))
	if(it != s.end()){
	// 	// cout<<(*it)<<endl;
		s.erase(it);
	}
	
	// it deletes all
	// s.erase("abc");

	print(s);
}