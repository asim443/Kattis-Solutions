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
       // cin.ignore();
        getline(cin,str[i]);
//        cin.ignore();
    }
    int vol=7;
    for(int i=0;i<n;i++)
    {
    	string s;
		s=str[i];
        if(s[5]=="o"&&vol<10)
        {
        	vol++;
		}
		else if(str[i]=="Skru ned!"&&vol>0)
		{
			vol--;
		}
		else
		{
			continue;
		}
    }
    cout<<vol;
}
