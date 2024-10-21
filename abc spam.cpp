#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int underscore=0;
	int lower,upper,symbol=0;
    string str;
    getline(cin,str);
    int length=str.length();
    for(int i=0;i<length;i++)
    {
        if(str[i]=='_')
        {
            underscore++;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            lower++;
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            upper++;
        }
        else
        {
            symbol++;
        }
    }
    cout<<(double)underscore/length<<endl;
    cout<<(double)lower/length<<endl;
    cout<<(double)upper/length<<endl;
    cout<<(double)symbol/length;
}
