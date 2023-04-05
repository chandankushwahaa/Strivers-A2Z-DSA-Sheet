#include <bits/stdc++.h>
using namespace	std;

void print(set<string> &s)
{
	// printed in sorted order
	for(string value : s){
		cout<< value <<endl;
	}
	cout<<endl;
	for(auto it = s.begin(); it != s.end(); ++it){
		cout<<(*it)<<endl;
	}
}

int main()
{
	// sets store elements in sorted order 
	set<string> s; 
	s.insert("abc"); 	// O(log(n))
	s.insert("bcd");
	s.insert("zyx");
	print(s);cout<<endl;
	// if u try to perform any opertion on .& their are chances of segmentation fault so we use if statement, if value not exist it will nt thorgh any error
	auto it = s.find("abc");	// O(log(n))
	if(it != s.end()){
		cout<<(*it)<<endl;
		s.erase(it);
	}

	print(s);
}