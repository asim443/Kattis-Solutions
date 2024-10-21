#include<iostream>
using namespace std;
int factorial(int s)
{
	int f=1;
	for(int i=s;i>=1;i--)
	{
		f=f*i;
	}
	//cout<<f;
	return f;
}
int main()
{
	int n;
	cin>>n;
	///factorial(n);
	if(n==4)
	{
		cout<<"4";
		return 0;
	}
	else
	{
		int p=n/4;
		int s=p-2;
		int ans=factorial(p)/(2*factorial(p-2));
		ans*=4;
		ans+=4;
		cout<<ans;
	}
}
