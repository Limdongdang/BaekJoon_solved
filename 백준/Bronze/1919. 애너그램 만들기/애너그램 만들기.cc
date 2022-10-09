#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string fi, se;
	cin >> fi >> se;
	int p1 = 0, p2 = 0, cnt = 0;
	sort(fi.begin(), fi.end());
	sort(se.begin(), se.end());
	while (p1 != fi.length() || p2 != se.length()) {
		if (p1 == fi.length())
		{
			p2++;
			cnt++;
			continue;
		}
		else if (p2 == se.length()) {
			p1++;
			cnt++;
			continue;
		}
		else {
			if (fi[p1] != se[p2]) {
				if (fi[p1] > se[p2]) {
					p2++;
					cnt++;
				}
				else {
					p1++;
					cnt++;
				}
			}
			else {
				p1++;
				p2++;
			}
		}
		
	}
	cout << cnt;
	return 0;
}