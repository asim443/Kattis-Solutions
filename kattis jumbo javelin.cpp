#include<iostream>
using namespace std;
int main()
{
    int c=0;
    int count=0;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            c=(a[i]+count);
            count=c;
            c=0;
        }
        else
        {
            c=(a[i]+count)-1;
            count=c;
            c=0;
        }
        
    }
    cout<<count;
    return 0;
}
