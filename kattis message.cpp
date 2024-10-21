#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	char ch[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>ch[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(ch[i][j]=='.')
			{
				continue;
			}
			else
			{
				cout<<ch[i][j];
			}
		}
	}
}
