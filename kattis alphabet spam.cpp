#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	float space = 0;
	float upper = 0;
	float lower = 0;
	float symbol = 0;
	string str;
	getline(cin, str);
	int len = str.length();
	for (int i = 0;i < len;i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			upper++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			lower++;
		}
		else if (str[i] == '_')
		{
			space++;
		}
		else
		{
			symbol++;
		}
	}
	int decimal = 7;
	long double upperans, lowerans, spaceans, symbolans;
	upperans = upper / len;
	lowerans=lower/len;
	spaceans=space/len;
	symbolans=symbol/len;
	cout<<fixed<<setprecision(decimal)<<spaceans<<endl;
	cout<<fixed<<setprecision(decimal)<<lowerans<<endl;
	cout<<fixed<<setprecision(decimal)<<upperans<<endl;
	cout<<fixed<<setprecision(decimal)<<symbolans<<endl;
}

