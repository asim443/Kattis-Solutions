#include<iostream>
using namespace std;
int main()
{
    char ch1[2100];
    char ch2[2100];
    cin.getline(ch1,2100);
    cin.getline(ch2,2100);
	int first,second;
 	for(int i=0;ch1[i]!='\0';i++)
	{
		if(ch1[i]=='|')
		{
			first=i;
			break;
		}
		else
		{
			cout<<ch1[i];			
		} 	
	}   
	for(int i=0;ch2[i]!='\0';i++)
	{
		if(ch2[i]=='|')
		{
			second=i;
			break;
		}
		else
		{
			cout<<ch2[i];			
		} 	
	}
	cout<<" ";
	for(int i=first+1;ch1[i]!='\0';i++)
	{
		cout<<ch1[i];	
	}  
	for(int i=second+1;ch2[i]!='\0';i++)
	{
		cout<<ch2[i];	
	}   
	return 0; 
}
