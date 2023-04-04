#include <bits/stdc++.h>
using namespace std;

// TL O(n1+n2)
// SC (1)
vector < int > FindIntersection(int A[], int B[], int n, int m) {

	int  i=0;
	int j=0;
	vector<int> ans;

	while(i<n && j<m){
		if(A[i] < B[j]){
			i++;
		}
		else if(B[j] < A[i]){
			j++;
		}
		else{
			ans.push_back(A[i]);
			i++;
			j++;
		}
	}

 	return ans;
}

int main()
{
  	int n = 10, m = 7;
  	int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  	int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  	vector <int> Intersection = FindIntersection(arr1, arr2, n, m);
  	cout << "Union of arr1 and arr2 is " << endl;
	for (auto & val: Intersection)
    	cout << val << " ";

  	return 0;
}
