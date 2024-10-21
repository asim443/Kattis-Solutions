#include<iostream>
using namespace std;
int main()
{
     long double ans=0;
    int n;
    cin>>n;
    float a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j+=3)
        {
            ans+=(a[i][j]*a[i][j+1]);
        }
    }
    cout<<ans;
    return 0;
}
