#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int days[30];
	    for(int i=0;i<30;i++)
	    {
	        cin>>days[i];
	    }
	    int count =0;
	    for(int i=0;i<30;i++)
	    {
	        if(days[i]==1)
	        {
	            count++;
	            if(count==6)
	            {
	               break; 
	            }
	        }
	        else
	         count=0;
	    }
	    if(count<=5)
	      cout<<"#allcodersarefun"<<endl;
	      else
	      cout<<"#coderlifematters"<<endl;
	}
	return 0;
}

