/*
HackerEarth - Monk and the Magical Candy Bags

Test case:
1
5 3
1 2 7 4 2

Optput: 14
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		multiset<long long> bags;
		for(int i=0; i<n; ++i){
			long long candy_ct;
			cin>>candy_ct;
			bags.insert(candy_ct);
		}
		long long total_candies = 0;
		for(int i=0; i<k; ++i){
			auto last_it = (bags.end());
			last_it--;
			long long candy_ct = *last_it;
			total_candies += candy_ct;
			bags.erase(last_it);		// O(1)
			bags.insert(candy_ct / 2);	// log(n)
		}
		cout<<total_candies<<endl;
	}
}