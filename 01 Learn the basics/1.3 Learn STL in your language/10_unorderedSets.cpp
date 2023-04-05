#include <bits/stdc++.h>
using namespace	std;

void print(unordered_set<string> &s)
{
	// printed in sorted order
	for(auto it = s.begin(); it != s.end(); ++it){
		cout<<(*it)<<endl;
	}
}

int main()
{
	unordered_set<string> s; 
	s.insert("abc"); 	// O(1)
	s.insert("bcd");
	s.insert("zyx");
	print(s);cout<<endl;
	// if u try to perform any opertion on .& their are chances of segmentation fault so we use if statement, if value not exist it will nt thorgh any error
	auto it = s.find("abc");	// O(1)
	if(it != s.end()){
		// cout<<(*it)<<endl;
		s.erase(it);
	}
	s.erase("bcd");

	print(s);
}