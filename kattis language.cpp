#include<iostream>
using namespace std;
int main()
{
    int v;
    cin>>v;
    int n;
    cin>>n;
    char s[n][100];
    int t;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<v)
        {
            cout<<s[i]<<" lokud";
        }
        else
        {
            cout<<s[i]<<" opin";
        }
    }
}
