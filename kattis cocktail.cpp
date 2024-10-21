#include<iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sor=false;
	for(int i=0;i<n-1;i++)
	{
		if((a[i+1]-a[i])>=0&&(a[i+1]-a[i])<=t)
		{
		    continue;
		}
		else
		{
		    sor=true;
		}
	}
	if(sor==false)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}

