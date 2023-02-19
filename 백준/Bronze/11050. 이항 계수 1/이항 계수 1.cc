#include<iostream>
using namespace std;

int fact(int n) {
	int re = 1;
	for (int i = 1; i <= n; i++)
	{
		re *= i;
	}
	return re;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;

	cout << fact(n) / fact(k) / fact(n-k);

	return 0;
}
