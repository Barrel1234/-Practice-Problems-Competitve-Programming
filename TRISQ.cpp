#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
	  int B;
	  cin>>B;
	  if(B==1 || B==2 || B==3)	
	    cout<<"0"<<endl;
	  else
	  {
	  	if(B%2==0) //for EVEN
	  	{
	  		int area =0.5*B*B;
	  		int res = (area-B)/4;
	  		cout<<res<<endl;
		}
		else //for ODD
		{
			B=B-1;
			int area =0.5*B*B;
	  		int res = (area-B)/4;
	  		cout<<res<<endl;
		}
	  }
	}
	return 0;
}
