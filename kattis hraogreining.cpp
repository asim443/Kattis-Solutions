#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int  ans = str.find("COV");
	if (ans >= 0)
	{
		cout << "Veikur!";
	}
	else
	{
		cout << "Ekki veikur!";
	}

}
