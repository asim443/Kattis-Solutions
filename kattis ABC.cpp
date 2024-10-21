#include<iostream>
using namespace std;
int main()
{
	int largeno,medno,smno;
	int largech,medch,smch;
	int n1,n2,n3;
	char c1,c2,c3;
	cin>>n1>>n2>>n3;
	cin>>c1>>c2>>c3;
	if(n1>n2&&n1>n3)
	{
		largeno=n1;
		if(n2>n3)
		{
			medno=n2;
			smno=n3;
		}
		else
		{
			medno=n3;
			smno=n2;
		}
	}
	else if(n2>n1&&n2>n3)
	{
		largeno=n2;
		if(n1>n3)
		{
			medno=n1;
			smno=n3;
		}
		else
		{
			medno=n3;
			smno=n1;
		}
	}
	else
	{
		largeno=n3;
		if(n1>n2)
		{
			medno=n1;
			smno=n2;
		}
		else
		{
			medno=n2;
			smno=n1;
		}
	}
	/*cout<<largeno<<" "<<medno<<" "<<smno<<endl;
	cout<<smno<<" "<<medno<<" "<<largeno<<endl;*/
	if(c1>c2&&c1>c3)
	{
		largech=c1;
		if(c2>c3)
		{
			medch=c2;
			smch=c3;
		}
		else
		{
			medch=c3;
			smch=c2;
		}
	}
	else if(c2>c1&&c2>c3)
	{
		largech=c2;
		if(c1>c3)
		{
			medch=c1;
			smch=c3;
		}
		else
		{
			medch=c3;
			smch=n1;
		}
	}
	else
	{
		largech=c3;
		if(c1>c2)
		{
			medch=c1;
			smch=c2;
		}
		else
		{
			medch=c2;
			smch=c1;
		}
	}
	/*cout<<largech<<" "<<medch<<" "<<smch<<endl;
	cout<<smch<<" "<<medch<<" "<<largech<<endl;*/
	if(largech==c1)
	{
		if(medch==c2)
		{
			if(smch==c3)
			{
				cout<<largeno<<" "<<medno<<" "<<smno;
			}
		}
		else
		{
			if(smch==c2)
			{
				cout<<largeno<<" "<<smno<<" "<<medno;
			}
		}
	}
	
	else if(largech==c2)
	{
		if(medch==c1)
		{
			if(smch==c3)
			{
				cout<<medno<<" "<<largeno<<" "<<smno;
				//cout<<"\nasim";
			}
		}
		else
		{
			cout<<smno<<" "<<largeno<<" "<<medno;
			/*if(smch==c1)
			{
				cout<<smno<<" "<<largeno<<" "<<medno;
			}*/
		}
	}
	else
	{
		//large=c3;
		if(medch==c1)
		{
			if(smch==c2)
			{
				cout<<medno<<" "<<smno<<" "<<largeno;
			}
		}
		else
		{
			if(smch==c1)
			{
				cout<<smno<<" "<<medno<<" "<<largeno;
			}
		}
	}
}
