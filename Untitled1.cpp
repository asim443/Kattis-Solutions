#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string str[n];
	for(int i=0;i<n;i++)
	{
		cin.ignore();
		getline(cin,str[i]);
	}
	bool checkkey=false;
	bool checkphone=false;
	bool checkwallet=false;
	for(int i=0;i<n;i++)
	{
		if(str[i]=="p")
		{
			checkphone=true;
		}
		else if(str[i]=="k")
		{
			checkkey=true;
		}
		else if(str[i]=="w")
		{
			checkwallet=true;
		}
		else
		{
			continue;
		}
	}
	int check=0;
	if(checkkey==false)
	{
		cout<<"keys"<<endl;
		check++;
	}
	if(checkphone==false)
	{
		cout<<"phone"<<endl;
		check++;
	}
	if(checkwallet==false)
	{
		cout<<"wallet"<<endl;
		check++;
	}
	if(check==0)
	{
		cout<<"ready"<<endl;
	}
}
