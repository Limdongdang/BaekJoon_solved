#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a1, a2;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a1 >> a2;
		sort(a1.begin(), a1.end());
		sort(a2.begin(), a2.end());

		if (a1 == a2)
		{
			cout << "Possible" << "\n";
		}
		else {
			cout << "Impossible" << "\n";
		}
	}
	return 0;
}