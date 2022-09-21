#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int key[9], sum = 0,c1,c2, sumc;
	for (int i = 0; i < 9; i++)
	{
		cin >> key[i];
		sum += key[i];
	}
	sort(key, key + 9);
	for (int i = 0; i < 9; i++)
	{
		sumc = sum;
		sumc -= key[i];
		for (int j = i + 1; j < 9; j++)
		{
			if (sumc - key[j] == 100)
			{
				c1 = i;
				c2 = j;
			}
		}
	}
	for (int i = 0; i < 9; i++)
	{
		if (c1 != i && c2 != i) {
			cout << key[i] << " ";
		}
	}
	return 0;
}