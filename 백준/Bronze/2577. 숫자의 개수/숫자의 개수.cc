#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, b, c, result;
	cin >> a >> b >> c;
	int list[10] = { 0 };
	result = a * b * c;
	while (result != 0) {
		list[result % 10]++;
		result = result / 10;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << list[i] << "\n";
	}
	return 0;
}