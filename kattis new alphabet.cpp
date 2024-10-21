#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int len=str.length();
	for(int i=0;i<len;i++)
	{
		if(str[i]=='a'||str[i]=='A')
		{
			cout<<"@";
		}
		else if(str[i]=='b'||str[i]=='B')
		{
			cout<<"8";
		}
		else if(str[i]=='c'||str[i]=='C')
		{
			cout<<"(";
		}
		else if(str[i]=='D'||str[i]=='d')
		{
			cout<<"|)";
		}
		else if(str[i]=='e'||str[i]=='E')
		{
			cout<<"3";
		}
		else if(str[i]=='f'||str[i]=='F')
		{
			cout<<"#";
		}
		else if(str[i]=='G'||str[i]=='g')
		{
			cout<<"6";
		}
		else if(str[i]=='h'||str[i]=='H')
		{
			cout<<"[-]";
		}
		else if(str[i]=='i'||str[i]=='I')
		{
			cout<<"|";
		}
		else if(str[i]=='j'||str[i]=='J')
		{
			cout<<"_|";
		}
		else if(str[i]=='k'||str[i]=='K')
		{
			cout<<"|<";
		}
		else if(str[i]=='l'||str[i]=='L')
		{
			cout<<"1";
		}
		else if(str[i]=='m'||str[i]=='M')
		{
			cout<<"[]\\/[]";
		}
		else if(str[i]=='n'||str[i]=='N')
		{
			cout<<"[]\\[]";
		}
		else if(str[i]=='o'||str[i]=='O')
		{
			cout<<"0";
		}
		else if(str[i]=='P'||str[i]=='p')
		{
			cout<<"|D";
		}
		else if(str[i]=='q'||str[i]=='Q')
		{
			cout<<"(,)";
		}
		else if(str[i]=='r'||str[i]=='R')
		{
			cout<<"|Z";
		}
		else if(str[i]=='s'||str[i]=='S')
		{
			cout<<"$";
		}
		else if(str[i]=='t'||str[i]=='T')
		{
			cout<<"']['";
		}
		else if(str[i]=='u'||str[i]=='U')
		{
			cout<<"|_|";
		}
		else if(str[i]=='v'||str[i]=='V')
		{
			cout<<"\\/";
		}
		else if(str[i]=='w'||str[i]=='W')
		{
			cout<<"\\/\\/";
		}
		else if(str[i]=='x'||str[i]=='X')
		{
			cout<<"}{";
		}
		else if(str[i]=='y'||str[i]=='y')
		{
			cout<<"`/";
		}
		else if(str[i]=='z'||str[i]=='Z')
		{
			cout<<"2";
		}
		else
		{
			cout<<str[i];
		}
	}
	return 0;
}
