#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{ 
		string s;
		cin>>s;
		int n = (int)s.size();
		int i=0;
		int count=0;
		// 1 2 3 4 5   i=5
		while(i<n)
		{
			if(s[i]!=s[i+1] && (i+1)<n)
			{
				count++;
				i+=2;				
			}else{
				i++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
