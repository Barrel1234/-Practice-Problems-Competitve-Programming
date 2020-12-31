#include<iostream>
#include<sstream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		ostringstream str1;
		str1<<n; 
		string s = str1.str();
		// string of numbers.
	    int sum=0;
		int len = s.length();
	    int f=s[0]-48;
	    int d=s[len-1]-48;
	    sum=f+d;
		 
		 cout<<sum<<endl; 
	}
	return 0;
	}

