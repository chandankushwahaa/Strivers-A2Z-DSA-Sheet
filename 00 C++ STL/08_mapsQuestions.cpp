/*
Given N string, print unique string in lexiograpical order with their frequency.
N <= 10^5
|S| <= 100

Input:
8
abc
def
abc
ghj
jkl
ghj
ghj
abc

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	map<string, int> m;
	int n;
	cin>>n;
	for(int i=0; i<n; ++i){
		string s;
		cin>>s;
		m[s]++; 	// <=> m[s] = m[s] + 1;
	}
	for(auto pr :m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}

}