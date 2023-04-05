/*
sort(): it is a combination of  Quick, Heap and Inseration Sort algorthim.

input:
6
4 5 2 4 1 6 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
		// vector<int> b(n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	
		// sort(b.begin(), b.end());
	sort(a, a+n);
	// sort(a+2, a+n);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;

}