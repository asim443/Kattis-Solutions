#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int space=0;
    cin.ignore();
    string str;
    getline(cin,str);
    int length=str.length();
    for(int i=0;i<length;i++)
    {
    	if(space==0)
    	{
    		if(str[i]>='A'&&str[i]<='Z')
       		{
           		cout<<str[i];
          		space=1;
				 continue;   
     		}
		}
		if(str[i]==' ')
		{
			space=0;
		}
		
        
    }
    return 0;
}
