#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n;
	    int c1=1;
	    int c2=0;
	    cin>>n;
	    string s[n];
	    string team1,team2;
	    for(int i=0;i<n;i++)
	    {
	           cin>>s[i];
	           team1=s[0];
	        
	           if(i>0 && s[i]==team1)
            c1++;
            else if(i>0 && s[i]!=team1){
           team2=s[i];
            c2++;
                
            }
        }
	    if(n==0){
	        cout<<"Draw"<<endl;
	    }
	    else if(c1==c2){
	    cout<<"Draw"<<endl;}
	    else if(c1>c2){
	    cout<<team1<<endl;}
	    else if(c1<c2){
	        cout<<team2<<endl; }
	    }
	    
	return 0;
}

