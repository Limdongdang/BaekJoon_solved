#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int a;
	cin >> a;


	vector<vector <int>> v(a,vector<int>(2,0));
	for (int i = 0; i < a; i++)
	{
		cin >> v[i][0] >> v[i][1];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < a; i++)
	{
		cout << v[i][0] << " " << v[i][1] << "\n";
	}
	return 0;
}