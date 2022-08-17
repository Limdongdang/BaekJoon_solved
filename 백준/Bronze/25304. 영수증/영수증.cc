#include <iostream>

using namespace std;

int main(void)
{
	int cost,time,price,count,result = 0;
	cin>>cost>>time;
	
	for(int i = 0; i < time; i++)
	{
		cin>>price>>count;
		result += price * count;
	}
	
	if(cost == result)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}