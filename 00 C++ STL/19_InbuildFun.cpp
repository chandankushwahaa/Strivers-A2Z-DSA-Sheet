/*
input:
6
2 3 1 6 7 6 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	// min_element return pointer
	int min = *min_element(v.begin(), v.end());
	// int min = *min_element(v, v+n);
	cout<<min<<endl;
	
	// search after skipping first 3 elements
	int min2 = *min_element(v.begin()+3, v.end());
	cout<<min2<<endl;

	// maximum
	int max = *max_element(v.begin(), v.end());
	cout<<max<<endl;

	// total sum 0 is initial sum
	int sum = accumulate(v.begin(), v.end(), 0);
	cout<<sum<<endl;

	//count
	int ct = count(v.begin(), v.end(), 6);
	cout<<ct<<endl;

	// find() finds the element in array and return pointer or iterator
	int element = *find(v.begin(), v.end(), 2);
	cout<<element<<endl;

	auto it = find(v.begin(), v.end(), 5);
	if(it != v.end())
		cout<<(*it)<<endl;
	else
		cout<<"element not found"<<endl;


	//reverse
	reverse(v.begin(), v.end());
	for(auto val : v){
		cout<< val <<" ";
	}
	cout<<endl;

	string s = "abcdefg";
	reverse(s.begin()+2, s.end());
	cout<<s<<endl;

}