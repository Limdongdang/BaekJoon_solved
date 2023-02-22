#include<iostream>

using namespace std;

const int amax = 100000;
int arr[amax];
int top = 0;

void stack_push(int x) {
	arr[top++] = x;
}
int stack_pop() {
	return arr[--top];
}
int stack_size() {
	return top;
}
int stack_empty() {
	if (top == 0) {
		return 1;
	}
	else {
		return 0;
	}
}
int stack_top() {
	return arr[--top];
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
			stack_push(x);
		}
		else if (s == "pop") {
			if (top == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << stack_pop() << "\n";
			}
		}
		else if (s == "size") {
			cout << stack_size() << "\n";
		}
		else if (s == "empty") {
			cout << stack_empty() << "\n";
		}
		else if (s == "top") {
			if (top == 0) {
				cout << -1 << "\n";
			}
			else {
				cout << stack_top() << "\n";
				top++;
			}
		}
	}
	return 0;
}

