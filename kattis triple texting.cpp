#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ans;
    string str;
    char tester;
    getline(cin,str);
    tester=str[0];
    ans[0]=tester;
    int length=str.length();
    cout<<ans[0];
    for(int i=0;i<length;i++)
    {
        if(i!=0)
        {
            if(str[i]==tester)
            {
                break;
            }
            else
            {
            	cout<<str[i];
                //ans[i]=str[i];
                continue;
            }
            
        }
    }
    //cout<<ans;
    return 0;
}
