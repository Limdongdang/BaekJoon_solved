#include<iostream>
#include<queue>

using namespace std;



int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	queue<int> q;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}
	cout << "<";

	while (q.size() != 0) {
		for (int i = 1; i < k; i++)
		{
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		if (q.size() != 1) {
			cout << ", ";
		}
		q.pop();
	}
	cout << ">";

	return 0;
}

