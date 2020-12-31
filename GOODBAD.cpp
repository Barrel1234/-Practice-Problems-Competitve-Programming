#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int cap=0;
		int small=0;
		for(int i=0;i<n;i++)
		{	
			char x = s[i];
			int p = int(x); //ASCII CODE
			if(p>=65 && p<=90)
			  cap++;
			else
			  small++;  				
		}
		// we have no of small and capital letters.
		if(cap==small)
		{
			if(k>=cap)
			cout<<"both"<<endl;
			else if(k<cap)
			cout<<"none"<<endl; 
		}
		else if(small>cap)
		{
			if(k>=small)
			cout<<"both"<<endl;
			else if(k<cap)
			cout<<"none"<<endl;
			else
			cout<<"chef"<<endl;
			
		}
		else if(cap>small)
		{
			if(k>=cap)
			cout<<"both"<<endl;
			else if(k<small)
			cout<<"none"<<endl;
			else
			cout<<"brother"<<endl;
		}
	}
	return 0;
}
