#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, x, num, cnt = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}
	cin >> x;
	sort(v.begin(), v.end());
	int fi = 0, la = n - 1;
	while (fi < la) {
		if (v[fi] + v[la] > x) {
			la--;
		}
		else if (v[fi] + v[la] < x) {
			fi++;
		}
		else {
			cnt++;
			fi++;
			la--;
		}
	}
	cout << cnt;
	return 0;
}