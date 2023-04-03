#include <bits/stdc++.h>
using namespace std;

// TC O(n)
// SC O(1)
vector<int> leftRotate(vector<int> arr, int n)
{
    int temp = arr[0];

    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    return arr;
}

void print(vector<int> arr, int n)
{
	for(int i=0; i<n; ++i){
		cout<<arr[i]<<" ";
	}
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int n = arr.size();

    vector<int> ans = leftRotate(arr, n);

	print(ans, n);
    return 0;
}
