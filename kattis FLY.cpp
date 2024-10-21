#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]=='5'&&str[i+1]=='5'&&str[i+2]=='5')
        {
            cout<<"1";
            break;
        }
        else
        {
            cout<<"0";
            break;
        }
    }
    return 0;
}
