#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		if(N%10==0)
		 cout<<"0"<<endl;
		else if(N%5==0)
		 cout<<"1"<<endl;
		else
		 cout<<"-1"<<endl;
	}
	return 0;
}
