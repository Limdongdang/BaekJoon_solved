#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int count, award;
	cin >> count >> award;
	int a[count];
	for(int i = 0; i < count; i++)
	{
		cin >> a[i];
	}
	sort(a, a + count);
	
	cout << a[count - award];
	
	return 0;
}