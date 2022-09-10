#include <iostream>
#include <algorithm>
#include<cmath>
#include<vector>
using namespace std;

vector<int> v;

int num[8001];

int main()
{
	int a, b, max = -4001, min = 4001;
	double sum = 0;
	cin >> a;
	double count = a;


	while (a--)
	{
		cin >> b;
		sum += b;
		if (max < b)
		{
			max = b;
		}
		if (min > b)
		{
			min = b;
		}
		v.push_back(b);
		num[b + 4000] += 1;
	}
	int res = *max_element(num, num + 8001);
	int pp;
	int sec = 0;
	for (int i = 0; i < 8001; i++)
	{
		if (sec == 2)
		{
			break;
		}
		if (res == num[i])
		{
			pp = i-4000;
			sec++;
		}
	}
	sort(v.begin(), v.end());
	if (round(sum / count) == -0)
	{
		cout << "0" << endl;
	}
	else
	{
		cout << round(sum / count) << endl;
	}
	cout << v[count / 2] << endl;
	cout << pp << endl;
	cout << max - min << endl;

	return 0;
}