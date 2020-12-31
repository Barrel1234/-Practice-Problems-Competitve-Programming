#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
       int n;
       cin>>n;
       string f[n];
       string l[n];
       for(int i=0;i<n;i++)
        {
        	cin>>f[i]>>l[i]; //first name and last name
	    }
	   int a[n];
	   for(int i=0;i<n;i++)
	   {
	   	a[i]=0;
	   }  
	   //initialise the array -a --> to 0
	   for(int i=0;i<n-1;i++)
	   {
	   	 for(int j=i+1;j<n;j++)
	   	   {
	   	  	if(f[i]==f[j])
	   	  	    {
	   	  	        a[i]++;
			        a[j]++;	
			    } 
		   } 
	   }
	   for(int i=0;i<n;i++)
	    {
	   	    if(a[i]==0)
	   	      { 
	   	   	    cout<<f[i]<<endl;
		      }
		    else
			  {
				 cout<<f[i]<<" "<<l[i]<<endl;
			  }  
		} 
	}
	return 0;
}
