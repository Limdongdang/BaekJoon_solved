#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int left, right, temp;
	int ls[21] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };

	for (int i = 0; i < 10; i++)
	{
		cin >> left >> right;
		for (int k = 0; k < 10; k++)
		{
			if (left <= right)
			{
				temp = ls[right];
				ls[right] = ls[left];
				ls[left] = temp;
				left++;
				right--;
			}
			else {
				break;
			}
		}
	}
	for (int i = 1; i < 21; i++)
	{
		cout << ls[i] << " ";
	}
	return 0;
}