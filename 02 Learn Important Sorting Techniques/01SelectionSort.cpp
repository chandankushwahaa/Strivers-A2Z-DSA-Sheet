#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int k = i;
		for(int j=i; j<n; j++)
		{
			if(arr[j] < arr[k])
				k = j;
		}
		swap(arr[i], arr[k]);
	}
}

void print(int arr[], int n)
{
	for(int i =0; i<n; ++i)
	{
		cout<<arr[i] <<" ";
	}cout<<endl;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; ++i){
		cin>>arr[i];
	}
	selection_sort(arr, n);
	print(arr, n);

	return 0;
}
