#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, num, v, cnt = 0;
	vector<int> vls;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		vls.push_back(num);
	}
	cin >> v;
	for (int i = 0; i < n; i++)
	{
		if (vls[i] == v) cnt++;
	}
	cout << cnt;
	return 0;
}