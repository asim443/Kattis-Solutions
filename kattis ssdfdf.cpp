#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int noofdig=7;
    const double football=0.09144;
    unsigned long int n;
    cin>>n;
    long double ans=n*football;
    cout<<fixed<<setprecision(noofdig)<<ans;
    return 0;
}
