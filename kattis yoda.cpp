#include<iostream>
#include<stack>
using namespace std;
int main()
{
	long long int a;
	long long int b;
	cin>>a>>b;
	long long int n1=a;
	long long int n2=b;
	int count1=0;
	int count2=0;
	while(true)
	{
		if(n1>10)
		{
			n1/=10;
			count1++;
		}
		if(n2>10)
		{
			n2/=10;
			count2++;
		}
		if(n1<10&&n2<10)
		{
			break;
		}
	}
	n1=a;
	n2=b;
	stack<int>first;
	stack<int>second;
	count1++;
	count2++;
	int loop1=count1;
	int loop2=count2;
	while(true)
	{
		if(loop1!=0)
		{
			int r=n1%10;
			first.push(r);
			n1/=10;
			loop1--;
		}
		if(loop2!=0)
		{
			int r=n2%10;
			second.push(r);
			n2/=10;
			loop2--;
		}
		if(loop2==0&&loop1==0)
		{
			break;
		}
	}
	while(first.size()<second.size())
	{
		first.push(0);
	}
	while(first.size()>second.size())
	{
		second.push(0);
	}
	int power1=1;
	int power2=1;
	long long int ans1=0;
	long long int ans2=0;
	bool firstcheck=false;
	bool secondcheck=false;
	while(first.size()!=0&&second.size()!=0)
	{
		if(first.top()==second.top())
		{
			ans1=(ans1*10)+first.top();
			ans2=(ans2*10)+second.top();
			power1*=10;
			power2*=10;
			firstcheck=true;
			secondcheck=true;
			first.pop();
			second.pop();
		}
		else if(first.top()<second.top())
		{
			ans2=(ans2*10)+second.top();
			power2*=10;
			first.pop();
			second.pop();
			secondcheck=true;
		}
		else if(first.top()>second.top())
		{
			ans1=(ans1*10)+first.top();
			power1*=10;
			first.pop();
			second.pop();
			firstcheck=true;
		}
	}
	if(firstcheck==false)
	{
		cout<<"YODA"<<endl;
		cout<<ans2<<endl;
	}
	else if(secondcheck==false)
	{
		cout<<ans1<<endl;
		cout<<"YODA"<<endl;
	}
	else
	{
		cout<<ans1<<endl;
		cout<<ans2<<endl;
	}
}
