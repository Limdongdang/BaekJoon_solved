#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> &v1, vector<int> &v2) {
	if (v1[1] == v2[1]) {
		return v1[0] < v2[0];
	}
	else {
		return v1[1] < v2[1];
	}
}

int main() {
	int count;
	cin >> count;

	vector<vector<int>> v(count,vector<int>(2,0));
	
	for (int i = 0; i < count; i++)
	{
		cin >> v[i][0] >> v[i][1];
	}

	sort(v.begin(), v.end(),compare);

	for (int i = 0; i < count; i++)
	{
		cout << v[i][0] << " " << v[i][1] <<"\n";
	}
	return 0;
}