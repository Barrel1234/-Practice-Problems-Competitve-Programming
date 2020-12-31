#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N; //berth number
		cin>>N;
		if(N%8==0)
		{
			cout<<N-1<<"SL"<<endl;
		}
		else if(N%8==7)
		{
			cout<<N+1<<"SU"<<endl;
		}
		else if(N%8==1)
		{
			cout<<N+3<<"LB"<<endl;
		}
		else if(N%8==4)
		{
			cout<<N-3<<"LB"<<endl;
		}
		else if(N%8==2)
		{
			cout<<N+3<<"MB"<<endl;
		}
		else if(N%8==5)
		{
			cout<<N-3<<"MB"<<endl;
		}
		else if(N%8==3)
		{
			cout<<N+3<<"UB"<<endl;
		}
		else if(N%8==6)
		{
			cout<<N-3<<"UB"<<endl;
        }				
	}
	return 0;
}
