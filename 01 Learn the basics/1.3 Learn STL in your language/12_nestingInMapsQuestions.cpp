/*
HackerEarth : The monk and class marks

Constraints:
1 <= N <= 10^5
1 <= |Length of the name| <= 100
1 <= Marks <= 100

Sample Input:
4
Eve 78
Bob 99
Alice 78
Alice 78

Sample Output:
Bob 99
Alice 78
Eve 78
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
/*	// 1
	map<int, multiset<string>> marks_map;
	int n;
	cin>>n;
	for(int i=0; i<n; ++i){
		int marks;
		string name;
		cin>>name>>marks;
		marks_map[marks].insert(name);
	}
	auto cur_it = --marks_map.end();
	while(true){
		auto &students = (*cur_it).second;
		int marks = (*cur_it).first;
		for(auto student : students){
			cout<<student<<" "<<marks<<endl;
		}
		if(cur_it == marks_map.begin())
			break;

		cur_it--;
	}
*/
	// 2
	map<int, multiset<string>> marks_map;
	int n;
	cin>>n;
	for(int i=0; i<n; ++i){
		int marks;
		string name;
		cin>>name>>marks;
		marks_map[-1*marks].insert(name);
	}
	for(auto & marks_students_pr : marks_map){
		auto &students = marks_students_pr.second;
		int marks = marks_students_pr.first;
		for(auto student : students){
			cout<<student<<" "<<-1*marks<<endl;
		}
	}
}