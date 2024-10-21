#include<iostream>
#include<string>
using namespace std;
int main()
{
	int ans=0;
	string str;
	getline(cin,str);
	int length=str.length();
	for(int i=0;i<length;i++)
	{
		ans+=str[i];
	}
	int p=ans/length;
	char aps=(char)p;
	cout<<aps;
}
