#include <bits/stdc++.h>
using namespace std;

vector < int > FindUnionSet(int arr1[], int arr2[], int n, int m)
{
  	set <int> s;
  	vector <int> Union;

  	for (int i = 0; i < n; i++)
    	s.insert(arr1[i]);

  	for (int i = 0; i < m; i++)
    	s.insert(arr2[i]);

  	for (auto & it: s)
    	Union.push_back(it);

  	return Union;
}
// Using Maps
vector < int > FindUnionMap(int arr1[], int arr2[], int n, int m) {

  	map < int, int > freq;
  	vector < int > Union;

	for (int i = 0; i < n; i++)
    	freq[arr1[i]]++;

	for (int i = 0; i < m; i++)
    	freq[arr2[i]]++;

	for (auto & it: freq)
    	Union.push_back(it.first);

  return Union;
}
int main()
{
  	int n = 10, m = 7;
  	int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  	int arr2[] = {2, 3, 4, 4, 5, 11, 12};
  	vector <int> Union1 = FindUnionSet(arr1, arr2, n, m);
  	cout << "Union of arr1 and arr2 is " << endl;
	for (auto & val: Union1)
    	cout << val << " ";

	vector <int> Union2 = FindUnionMap(arr1, arr2, n, m);
	cout<<endl<<endl;
  	cout << "Union of arr1 and arr2 is " << endl;
  	for (auto & val: Union2)
    	cout << val << " ";

  	return 0;
}
