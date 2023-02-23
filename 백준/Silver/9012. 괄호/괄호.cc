#include<iostream>
#include<stack>
using namespace std;



int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int j = 0; j < n; j++)
	{
		int count = 0;
		string str;
		stack<char> sck;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(') {
				sck.push(str[i]);
			}
			else {
				if (sck.empty()) {
					sck.push(str[i]);
					break;
				}
				else  {
					sck.pop();
				}
			}
		}
		if (sck.empty()) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
	return 0;
}

