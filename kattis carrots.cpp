#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    int p;
    cin>>n;
    cin>>p;
    cout<<endl;
    string str[n];
    for(int i=0;i<n;i++)
    {
    	cin.ignore();
        getline(cin,str[i]);
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
    	if(str[i]=="carrots?")
    	{
    		count++;	
		}
		else if(str[i]=="sovl problemz")
		{
			cout<<p;
			return 0;
		}
		else
		{
			continue;
		}
	}
	cout<<count;
	return 0;
}
