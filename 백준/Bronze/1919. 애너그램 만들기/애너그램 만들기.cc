#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string fi, se;
	cin >> fi >> se;
	int cnt = 0;
	int ls[2][26] = { 0 };
	for (int i = 0; i < fi.length(); i++)
	{
		ls[0][fi[i] - 'a']++;
	}
	for (int i = 0; i < se.length(); i++)
	{
		ls[1][se[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++)
	{
		cnt += abs(ls[0][i] - ls[1][i]);
	}
	cout << cnt;
	return 0;
}