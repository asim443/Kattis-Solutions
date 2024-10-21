#include<iostream>
#include<string>
using namespace std;
int main()
{
	char test[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	bool ans[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	string str;
	int counter=0;
	getline(cin,str);
	int length=str.length();
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<26;j++)
		{
			if(str[i]==test[j])
			{
				ans[j]=true;
			}
			else
			{
				continue;
			}
		}
		
	}
	for(int i=0;i<26;i++)
	{
		if(ans[i]==false)
		{
			counter++;
		}
		else
		{
			continue;
		}
	}
	cout<<counter;
	return 0;
}
