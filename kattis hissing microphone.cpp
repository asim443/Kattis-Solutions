#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len=str.length();
    bool check1,check2;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='s')
        {
            check1=true;
            if(str[i+1]=='s')
            {
                check2=true;
                break;
            }
            else
            {
                check1=false;
            }
        }
        else
        {
        	continue;
		}
    }
    if(check1==true&&check2==true)
    {
        cout<<"hiss";
    }
    else
    {
        cout<<"no hiss";
    }
    return 0;
}
