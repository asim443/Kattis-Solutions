#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string str[n];
	vector<string> output;
	for (int i = 0;i < n;i++)
	{
		cin.ignore();
		getline(cin, str[i]);
	}
	for (int i = 0;i < n;i++)
	{
		if (str[i] != "Present!")
		{
			if (i == n - 1)
			{
				output.push_back(str[i]);
				break;
			}
			else if (str[i + 1] == "Present!")
			{
				continue;
			}
			else
			{
				output.push_back(str[i]);
			}
		}
		else
		{
			continue;
		}
	}
	int len = output.size();
	for (int i = 0;i < len;i++)
	{
		cout << output[i] << endl;
	}
	
}
