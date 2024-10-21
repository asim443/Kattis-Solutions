#include<iostream>
using namespace std;
int main()
{
	int n,b,p;
	cin>>n;
	int test=0;
	do
	{
		cin>>b;
		cin>>p;
		float ans1=(float)b;
		float ans2=(float)p;
		float bpm;
		bpm=(60*ans1)/ans2;
		float abpm;
		abpm=(60)/ans2;
		float mabpm;
		mabpm=(bpm)-(abpm);
		cout<<abpm<<" "<<bpm<<" "<<mabpm;
		test++;
	}
	
	while(test<=n);
	return 0;

}
