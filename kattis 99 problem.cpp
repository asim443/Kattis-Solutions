#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int q=a/100;
	int r=a%100;
	if(a<149)
	{
		cout<<"99";
		return 0;
	}
	else if(r==0)
	{
		cout<<a-1;
		return 0;
	}
	else
	{
		if(r>=49)
		{
			for(int i=r;i!=99;i++)
			{
				a++;
			}
			cout<<a;
		}
		else
		{
			for(int i=1;i!=(r+2);i++)
			{
				a--;
			}
			cout<<a;
		}
	}
	return 0;
}
