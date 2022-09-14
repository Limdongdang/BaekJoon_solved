#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, string> v1, pair<int, string> v2) {
	return v1.first < v2.first;
}

int main() {
	int count, x;
	string y;
	cin >> count;

	vector<pair<int, string>> v;
	
	for (int i = 0; i < count; i++)
	{
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	stable_sort(v.begin(), v.end(),compare);

	for (int i = 0; i < count; i++)
	{
		cout << v[i].first << " " << v[i].second <<"\n";
	}
	return 0;
}