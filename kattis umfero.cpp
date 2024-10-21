#include<iostream>
using namespace std;
int main()
{
    int m,n=0;
    float count=0;
    cin>>m;
    cin>>n;
    float b=float(m);
  	cin.ignore();
    char ch[m][n];
    //cin.getline(ch,m);
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cin>>ch[i][j];
		}
	}
    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(ch[i][j]=='.')
        	{
            	count++;
        	}
		}
    }
    cout<<(double)count/b;
    return 0;
}
