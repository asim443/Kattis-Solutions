#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	int decimal=7;
	float a;
	cin>>a;
	float s=sqrt(a);
	cout<<fixed<<setprecision(decimal)<<(s+s+s+s);
	return 0;
}
