#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int a, sum = 0, min = 100, check = 0;
	for (int i = 0; i < 7; i++)
	{
		cin >> a;
		if (a % 2 == 1) 
		{
			check = 1;
			sum += a;
			if (min > a)
			{
				min = a;
			}
		}
	}
	if (check == 1)
	{
		cout << sum << "\n" << min;
	}
	else {
		cout << "-1";
	}
	return 0;
}