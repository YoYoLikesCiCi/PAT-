#include<iostream>
#include<math>
using namespace std;

int su(int x)
{
	int i=2;
	for(i;i<=fabs(x);i++)
	{
		if(x%i==0)
		{
			return 1;
			break;
		}
	}
	if(i==fabs(x)&&x%i!=0)
		return 0;
}

int main()
{
	int a=2,b,i;
	for(a=2;;a++)
	{
		if(su(a)==1)
		{
			
		}
	}
}
