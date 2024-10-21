#include<iostream>
using namespace std;
int main()
{
	int n,t;
	cin>>n;
	cin>>t;
	bool check[n-1];
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(((a[i+1]-a[i])<=t))
		{
			if((a[i+1]-a[i])>0)
			{
				check[i]=true;	
			}
			else
			{
				check[i]=false;
			}
			
		}
		else
		{
			check[i]=false;
		}
	}
	bool count=false;
	for(int i=0;i<n-1;i++)
	{
		if(check[i]==true)
		{
			count=true;
		}
		else
		{
			count=false;
			break;
		}
	}
	if(count==true)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
}
