#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	for (int j = 1; j < n+1; j++)
	{
		for (int i = 0; i < n - j; i++)
		{
			cout << " ";
		}
		for (int i = 0; i < 2 * j - 1; i++)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}