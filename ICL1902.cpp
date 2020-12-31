#include<iostream>
using namespace std;
int main()
{
	int a[36];
	for(int i=1;i<36;i++)
	{
		a[i]=i*i;
	}
	// we get a array of perfect square
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int count=0;
		while(n!=0)
		{
			for(int i=1;i<36;i++)
			{
				if(a[i]<=n && a[i+1]>n)
				 {
				 	n=n-a[i];
				 	count++;
				 }
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
