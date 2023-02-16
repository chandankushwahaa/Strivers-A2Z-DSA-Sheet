#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		int j = i-1;
		int x = arr[i];
		while(j >-1 && arr[j] > x)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = x;
	}
}

void print(int arr[], int n)
{
	for(int i=0; i<n; ++i)
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
	insertion_sort(arr, n);
	print(arr, n);

	return 0;
}
