#include<iostream>
#include<string>
using namespace std;
int main()
{
	int j,k;
	int count=0;
    string str;
    getline(cin,str);
    int len=str.length();
    bool check=false;
    for(int i=0;i<len;i++)
    {
    	if(check==false)
    	{
    		if(str[i]>='1'&&str[i]<='1000')
        	{
            	count++;
            	continue;
        	}	
		}
        
        if(str[i]=='-')
        {
        	j=i-1;
            check=true;
            continue;
        }
        if(check==true)
        {
            if(str[i]>='1'&&str[i]<='1000')
        	{
        		count+=str[i]-str[j];
        		continue;
        	}
        }
    	if(str[i]==';')
        {
        	check=false;
        	j=0;
        	continue;
		}
    }
    cout<<count;
}
