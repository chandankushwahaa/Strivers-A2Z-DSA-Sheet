#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high)
    {
        if(arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        arr[i] = temp[i-low];
    }
}
void mS(vector<int> &arr, int low, int high)
{
    if(low == high)
        return;
    int mid = (low+high)/2;
    mS(arr, low, high);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);

}
void merge_sort(vector<int> &arr, int n)
{
    mS(arr, 0, n-1);
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
	merge_sort(v, n);
	print(v, n);

	return 0;
}
