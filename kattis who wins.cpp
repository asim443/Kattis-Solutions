#include<iostream>
using namespace std;
int main()
{
	char ch[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>ch[i][j];
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(ch[i][j]=='_')
			{
				continue;
			}
			if(ch[0][0]=='X'&&ch[1][1]=='X'&&ch[2][2]=='X')
			{
				
			}
		}
	}
}
