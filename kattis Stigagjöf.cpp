#include<iostream>
#include<string>
using namespace std;
int main()
{
	bool ans1=false;
    int tester;
    cin>>tester;
    string str[tester];
    for(int i=0;i<tester;i++)
    {
        cin>>str[i];
    }
    int ans;
    for(int i=0;i<tester;i++)
    {
        if(i==12)
        {
            ans=i;
            break;
            //ans1=true;
        }
        else
        {
            continue;
        }
    }
    if(tester>13)
    cout<<str[ans];
    else
    cout<<str[ans-1];
    //cout<<str[ans-1];
}
