#include<iostream>
#include<string>
using namespace std;
int main()
{
	int c1,c2;
	string str;
	getline(cin,str);
	int len=str.length();
	c1=0;
	c2=0;
	for(int i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			c1++;
		}
	}
	for(int i=0;i<len;i++)
	{
		if(str[i]=='y'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			c2++;
		}
	}
	cout<<c1<<" "<<c2;
	return 0;
}
