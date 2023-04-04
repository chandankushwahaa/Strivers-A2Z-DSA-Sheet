#include <bits/stdc++.h>
using namespace std;

// TL O(n^2)
// SC O(1)
int appearsOnceAndTwice(vector<int> arr, int n)
{
	int maxi = 0;
	int cnt = 0;
	for(int i=0; i<n; i++){
		if(arr[i] == 1){
			cnt++;
			maxi = max(maxi, cnt);
		}
		else{
			cnt = 0;
		}
	}
	return maxi;
}

// TL O(3n)
// SC O(maxi) -> depend in the inputs
int appearsOnceAndTwice2(vector<int> arr, int n)
{
	int maxi = arr[0];
	for(int i=0; i<n; i++){
		maxi = max(maxi, arr[i]);
	}
	int hash[maxi] = {0};
	for(int i=0; i<n; i++){
		hash[arr[i]]++;
	}
	for(int i=0; i<n; i++){
		if(hash[arr[i]] == 1){
			return arr[i];
		}
	}
}
int main()
{
  	vector<int> arr = {1,1,2,3,3,4,4};
	int n = arr.size();

	cout<<appearsOnceAndTwice(arr, n);
	cout<<endl;
	cout<<appearsOnceAndTwice2(arr, n);

  	return 0;
}
