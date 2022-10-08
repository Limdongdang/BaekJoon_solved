#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, s, y, room = 0;
	int ls[2][7] = { 0 };
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> s >> y;
		ls[s][y]++;
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 1; j < 7; j++) {
			if (ls[i][j] != 0) {
				room += ls[i][j] / k;
					if (ls[i][j] % k > 0) { 
						room++;
					}
			}
		}
	}
	cout << room;
	return 0;
}