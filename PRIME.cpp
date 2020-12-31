#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter value of n upto which you want to print prime number:"<<endl;
	cin>>n;
	for(int i=2;i<=n;i++) //10
	{
		int  x = i; // 10
		int count = 0;
		for(int j=1;j<=x;j++) //j=1 to 10
		{
			if(x%j==0) //10%1==0
			  count++;
			else
			  count=count;
		}
		if(count==2)
		   cout<<x<<endl;
		else
		   cout<<" "<<endl;
	}	
	return 0;
}
