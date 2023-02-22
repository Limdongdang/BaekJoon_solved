#include<iostream>

using namespace std;

const int amax = 1000000;
int arr[amax];
int first = 0, last = 0;

void queue_push(int x) {
	arr[last++] = x;
}
int queue_pop() {
	return arr[first++];
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

	for (int i = 1; i <= n; i++)
	{
		queue_push(i);
		
	}
	for (int i = 0; i < n-1; i++)
	{
		queue_pop();
		queue_push(queue_pop());
	}
	cout << queue_back();

	return 0;
}

