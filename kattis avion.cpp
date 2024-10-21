#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s2,s3,s4,s5;
    int ans[5]={0,0,0,0,0};
    bool checker=false;
    bool checker1=false;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    getline(cin,s4);
    getline(cin,s5);
    for(int i=0;i<11;i++)
    {
        if((s1[i]=='F')||(s2[i]=='F')||(s3[i]=='F')||(s4[i]=='F')||(s5[i]=='F'))
        {
            checker=true;
            continue;
        }
        if(checker==true)
        {
        	if((s1[i]=='B')||(s2[i]=='B')||(s3[i]=='B')||(s4[i]=='B')||(s5[i]=='B'))
           {
              checker1=true;
              continue;
           	} 
		   else
		   {
		   	checker=false;
		   	continue;
			}    
        }
        if(checker==true)
        {
        	if(checker1==true)
        	{
        		if((s1[i]=='I')||(s2[i]=='I')||(s3[i]=='I')||(s4[i]=='I')||(s5[i]=='I'))
           {
              ans[i]=i;
              continue;
           	} 
		   else
		   {
		   	checker=false;
		   	checker1=0;;
			}   
			} 
        }
    }
    int c=0;
    for(int i=0;i<5;i++)
    {
    	if(ans[i]!=0)
    	{
    		cout<<ans[i]<<endl;
		}
		else
		{
			c++;
		}
	}
	if(c==5)
	{
		cout<<"HE GOT AWAY!";
	}
    
}
