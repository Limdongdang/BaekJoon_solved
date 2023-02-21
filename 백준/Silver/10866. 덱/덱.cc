#include<iostream>

using namespace std;

const int amax = 100000;
int arr[2 * amax + 1];
int front = amax, back = amax;

void push_front(int x) {
	arr[--front] = x;
}
void push_back(int x) {
	arr[back++] = x;
}
void pop_front() {
	if (front == back) {
		cout << -1 << "\n";
	}
	else {
		cout << arr[front++] << "\n";
	}
}
void pop_back() {
	if (front == back) {
		cout << -1 << "\n";
	}
	else {
		cout << arr[--back] << "\n";
	}
}
void size() {
	cout << back - front << "\n";
}
int empty() {
	if (front == back) {
		return 1;
	}
	else {
		return 0;
	}
}
void dfront() {
	if (empty()) {
		cout << -1 << "\n";
	}
	else {
		cout << arr[front] << "\n";
	}
}
void dback() {
	if (empty()) {
		cout << -1 << "\n";
	}
	else {
		cout << arr[back -1] << "\n";
	}
}
int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string order;
		cin >> order;
		if (order == "push_front") {
			int v;
			cin >> v;
			push_front(v);
		}
		else if (order == "push_back") {
			int v;
			cin >> v;
			push_back(v);
		}
		else if (order == "pop_front") {
			pop_front();
		}
		else if (order == "pop_back") {
			pop_back();
		}
		else if (order == "size") {
			size();
		}
		else if (order == "empty") {
			cout << empty() << "\n";
		}
		else if (order == "front") {
			dfront();
		}
		else if (order == "back") {
			dback();
		}
	}
	return 0;
}

