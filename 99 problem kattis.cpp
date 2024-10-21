#include<iostream>
using namespace std;
int main()
{
	int last;
	int q=0;
	int r=0;
	int N;
	cin >> N;
	if(N>=100)
	{
		q = N / 100;
		 r = N % 100;
			if(r==0)
			{
				N--;
				cout<<N;
				return 0;
			}
			else
			{
				for (int i = 0;i <= 99;i++)
				{
					if (r != 99&&r>=49)
					{
						N += 1;
						r += 1;
					}
					else if(r!=99&&r<49)
					{
						r--;
						if(r==0)
						{
							q--;
							r=99;
						}
					}
					if (r == 99)
					{
						last = r;
						break;
					}
				}
				cout  << q << last;
				return 0;	
			}
			
	}
	else if(N<100)
	{
		for(int i=0;i<=99;i++)
		{
			if(N!=99)
			{
				N++;
			}
		}
		cout<<N;
		return 0;
	}
	

	
	return 0;

}


