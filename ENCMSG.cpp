#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N; //length of string
		string s;
		cin>>s;
		// 1st step of encoding
		if(N%2==0)
		{
			//even
			for(int i=0;i<N;i=i+2)
			{
				char z = s[i+1]; //z='h'
				s[i+1] = s[i];  //
				s[i] = z;
			}
		}
		else
		{
				// odd
			for(int i=0;i<N-1;i=i+2)
			{
				char z = s[i+1]; //z='h'
				s[i+1] = s[i];  //
				s[i] = z;
			}
	    }
	    // 2nd stage of encoding
	    for(int i=0;i<N;i++)
	    {
	    	char c = s[i]; //recent character // b--> 98
	    	//int index = s[i]-97;
	    	int index = c-97; // 1
	    	int req = 25-index; // 24
	    	req = req + 97;
			char y = (char)req; // real ASCII CODE
			cout<<y;
		}
		cout<<endl;
    } 
	return 0;
}
