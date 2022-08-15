#include <iostream>

using namespace std;

int main(void)
{
	int val1,val2;
  while (1)
  {
	  cin>>val1>>val2; 
    if (val1 == 0 && val2 == 0)
    {
      break;
    }
    if (val1 > val2)
    {
      cout<<"Yes"<<endl;
    }
    else
    {
      cout<<"No"<<endl;
    }
  }

	return 0;
}