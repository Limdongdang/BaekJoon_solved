#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, sum = 0,nonecheck = -1,min;

	cin >> a >> b;
	for (int i = 1; i * i <= b; i++)
	{
		if (a <= i * i && i * i <= b && nonecheck == -1) {
			min = i * i;
			sum = sum + i * i;
			nonecheck = 1;
		}
		else if (a <= i * i && i * i <= b) {
			sum = sum + i * i;
		}
	}
	if (nonecheck == -1)
	{
		cout << "-1";
	}
	else {
		cout << sum << "\n" << min;
	}
	return 0;
}