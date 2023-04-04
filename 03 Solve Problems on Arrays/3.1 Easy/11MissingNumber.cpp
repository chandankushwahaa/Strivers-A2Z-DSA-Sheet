#include <bits/stdc++.h>
using namespace std;

// BruteForce Approach
int missingNumber(vector<int> &arr, int n)
{
	for(int i=1; i<=n; i++){
		int flag = 0;

		for(int j=0; j<n-1; j++){
			if(arr[j] == i){
				// Element Present
				flag = 1;
				break;
			}
		}
		// Element missing
		if(flag == 0)
			return i;
	}
 	return -1;
}

// Better Approach
int missingNumberBetter(vector<int> &arr, int n)
{
	// Hash Array
	int hash[n+1] = {0};

	// storing the frequencies
	for(int i=0; i<n-1; i++){
		hash[arr[i]]++;
	}
	// checking the frequencies
	for(int i=1; i<=n; i++){
		if(hash[i] == 0)
			return i;
	}

	return -1;
}

// OPtimal Approach
int missingNumberOptimal(vector<int> &arr, int n)
{
	int sum = (n*(n+1)) / 2;

	int s2 = 0;
	for(int i=0; i<n-1; i++){
		s2 += arr[i];
	}

	int missingnum = sum-s2;
	return missingnum;
}
int main()
{
  	vector<int> arr = {1, 2, 4, 5};
	int n = arr.size();

	cout<<missingNumber(arr, n);
	cout<<endl;
	cout<<missingNumberBetter(arr,n);
	cout<<endl;
	cout<<missingNumberOptimal(arr,n);

  	return 0;
}
