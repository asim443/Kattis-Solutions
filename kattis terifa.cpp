#include<iostream>
using namespace std;
int main()
{
	int x;
	int p;
	int *mb;
	cin>>x;
	cin>>p;
	mb=new int[p];
	int sum=0;
	for(int i=0;i<p;i++)
	{
		cin>>*(mb+i);
		sum+=(*(mb+i));
	}
	int total=x*p;
	total+=x;
	cout<<total-sum;
}
