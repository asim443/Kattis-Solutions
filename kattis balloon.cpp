#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    if(str[0]=='O')
    {
        if(str[4]=='3'&&str[5]=='1')
        {
        	cout<<"yup";
		}
		else
		{
			cout<<"nope";
		}
    }
    else if(str[0]=='D')
    {
    	if(str[4]=='2'&&str[5]=='5')
		{
			cout<<"yup";
		}
		else
		{
			cout<<"nope";
		}
	}
    else
    {
        cout<<"nope";
    }
}
