#include<iostream>
#include<string>
using namespace std;
int main()
{
	
    string str;
    getline(cin,str);
    int len=str.length();
    string s;
    s=(str[len-2]*10)+str[len-1];
    cout<<s;
    /*cout<<str[len-2]<<endl;
    int lasttwo=0;
	lasttwo=char(str[len-1]);
    cout<<lasttwo;*/
    /*lasttwo*=10;
    lasttwo+=str[len-2];
    cout<<lasttwo;*/
}
