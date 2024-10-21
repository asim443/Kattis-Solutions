#include<iostream>
#include<string>
using namespace std;
int main()
{
	int tester;
	int n=0;
	string str1,str2;
	cin>>tester;
	do
	{
	
		cin>>str1;
		cin>>str2;
		int length1=str1.length();
		int length2=str2.length();
		string final;
			cout<<str1<<endl;
		cout<<str2<<endl;
		
		for(int i=0;i<length1;i++)
		{
			if(str1[i]==str2[i])
			{
				cout<<".";
			}
			else
			{
				cout<<"*";
			}
		}
			cout<<endl;
	
		int anslength=final.length();
		for(int j=0;j<anslength;j++)
		{
			cout<<final[j];
		}
	
		n++;
		str1.empty();
		str2.empty();
	}
	while(n<tester);
	return 0;
}
