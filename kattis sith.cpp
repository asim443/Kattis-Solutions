#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int a,b,c;
    getline(cin,str);
    cin>>a;
    cin>>b;
    cin>>c;
    int ans=b-a;
    if(ans==c)
    {
        cout<<"SITH";
    }
    else if(ans==-c)
    {
    	cout<<"JEDI";
	}
	else
	{
		cout<<"VEIT EKKI";
	}
	return 0;
}
