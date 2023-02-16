#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int flag=0;
		for(int j=0; j<=i-1; j++)
		{
			if(arr[j] > arr[j+1]){
				swap(arr[i], arr[j]);
				flag = 1;
			}
		}
		if(flag == 0)
			break;
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
	bubble_sort(arr, n);
	print(arr, n);

	return 0;
}
