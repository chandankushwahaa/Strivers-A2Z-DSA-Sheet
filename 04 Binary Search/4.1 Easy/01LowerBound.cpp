//  smaller index such that arr[index] >= x
#include <bits/stdc++.h>
using namespace std;


// O(N)
int lowerbound(vector<int> arr, int x)
{
	int n = arr.size();
	int ans = -1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= x)  // remove = and works for upperbound
		{
			ans = i;
			break;
		}
	}
	return ans;
}
// O(logN)
int lowerbound2(vector<int> arr, int x)
{
	int n = arr.size();
	int ans = -1;
	int low = 0, high = n - 1;
	while (low <= high)
	{
		int mid = low + (high - low) / 2;
		if (arr[mid] >= x) // remove = and works for upperbound
		{
			ans = mid;
			high = mid - 1;
		}
		else
			low = mid + 1;
	}
	return ans;
}

// Build in function O(logN)
int lowerbound3(vector<int> arr, int x)
{
	auto it = lower_bound(arr.begin(), arr.end(), x);
	if (it == arr.end())
		return -1;
	return it - arr.begin();
}

int main()
{
	vector<int> arr = {3,5,8,15,19};
	int x = 16;
	cout << lowerbound(arr, x) << endl;
	cout << lowerbound2(arr, x) << endl;
	cout << lowerbound3(arr, x) << endl;
	return 0;
}