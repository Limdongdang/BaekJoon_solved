#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string a;
	cin >> a;

	sort(a.begin(), a.end(),greater<>());

	for (int i = 0; i < a.length(); i++)
	{
		cout << a[i];
	}

	return 0;
}