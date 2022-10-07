#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N, max;
	int ls[10] = { 0 };
	cin >> N;
	while (N != 0) {
		ls[N % 10]++;
		N /= 10;
	}
	max = ((ls[6] + ls[9]) / 2) + ((ls[6] + ls[9]) % 2);
	for (int i = 0; i < 10; i++)
	{
		if (ls[i] > max && i != 6 && i != 9) {
			max = ls[i];
		}
	}
	cout << max;
	return 0;
}