#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    int length=s1.length();
    char checker=s1[0];
    cout<<checker;
    for(int i=0;i<length;i++)
    {
        if(checker==s1[i])
        {
            continue;
        }
        else
        {
            cout<<s1[i];
            checker=s1[i];
        }
    }
    return 0;
}

