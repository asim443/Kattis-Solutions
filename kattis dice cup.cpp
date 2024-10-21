#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cin>>n>>m;
    if(n==m)
    {
        cout<<n+1;
        return 0;
    }
    else
    {
        if(n<m)
        {
            int iter=m+1;
            for(int i=n+1;i<=iter;i++)
            {
                cout<<i<<endl;
            }
        }
        else
        {
            int iter=n+1;
            for(int i=m+1;i<=iter;i++)
            {
                cout<<i<<endl;
            }
        }
    }
}
