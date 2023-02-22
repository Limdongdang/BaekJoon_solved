#include<iostream>

using namespace std;

const int amax = 100000;
int arr[amax];
int first = 0, last = 0;

void queue_push(int x) {
	arr[last++] = x;
}
int queue_pop() {
	return arr[first++];
}
int queue_size() {
	return last - first;
}
int queue_empty() {
	if (first == last) {
		return 1;
	}
	else {
		return 0;
	}
}
int queue_front() {
	return arr[first];
}
int queue_back() {
	int lasti = last;
	return arr[--lasti];
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;
		int x;
		cin >> s;
		if (s == "push") {
			cin >> x;
			queue_push(x);
		}
		else if (s == "pop") {
			if (queue_empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << queue_pop() << "\n";
			}
		}
		else if (s == "size") {
			cout << queue_size() << "\n";
		}
		else if (s == "empty") {
			cout << queue_empty() << "\n";
		}
		else if (s == "front") {
			if (queue_empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << queue_front() << "\n";
			}
		}
		else if (s == "back") {
			if (queue_empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << queue_back() << "\n";
			}
		}
	}
	return 0;
}

