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
    	getline(cin,str[i]);
    	cin.ignore();  
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(str[i][j]==' ')
    		{
    			cout<<"asim";
			}
		}
	}
}
