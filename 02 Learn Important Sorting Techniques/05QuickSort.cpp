#include <bits/stdc++.h>
using namespace std;

int parition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i=low, j=high;

    while(i<j)
    {
        while(arr[i] <= pivot && i <= high-1)
        {
            i++;
        }

        while(arr[j] > pivot && j >= low+1)
        {
            j--;
        }

        if(i<j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;
}

void qS(vector<int> &arr, int low, int high)
{
    if(low < high){
        int pIndex = parition(arr, low, high);
        qS(arr, low, pIndex-1);
        qS(arr, pIndex+1, high);
    }
}

vector<int> quick_sort(vector<int> &arr, int n)
{
    // qS(arr, 0, arr.size()-1);
    qS(arr, 0, n-1);
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
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0; i<n; ++i){
		cin>>v[i];
	}
	vector<int> ans = quick_sort(v, n);
	print(v, n);

	return 0;
}
