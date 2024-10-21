#include<iostream>
using namespace std;
int main()
{
	int count=0;
	int k;
	cin>>k;
	while(k>=500)
	{
		count++;
		k-=500;
	}
	while(k<500&&k>=150) //200
	{
		count++;
		k-=200;
	}
	while(k<200&&k>=100)
	{
		count++;
		k-=100;
	}
	cout<<count;
}
