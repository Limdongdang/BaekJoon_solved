#include <iostream>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	string a;
	char words[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	int num[26], count;
	cin >> a;
	for (int i = 0; i < 26; i++)
	{
		count = 0;
		for (int j = 0; j < a.size(); j++)
		{
			if (words[i] == a[j]) {
				count++;
			}
		}
		num[i] = count;
	}
	for (int i = 0; i < 26; i++)
	{
		cout << num[i] << " ";
	}

	return 0;
}