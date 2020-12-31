#include<iostream>
#include<string>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    int a;
	    int c=0;
	    a=s.size();
	    for(int i=0;i<a;i++){
	        if(s[i]=='A'  && s[i+1]=='B'){
	            c++;
	            i++;
	            
	        }
	            else if(s[i]=='B' && s[i+1]=='A')
	            {
	                c++;
	                i++;
	                
	                
	            }
	    }
	    if(c==a/2)
	       cout<<"yes"<<endl;
	       else
	       cout<<"no"<<endl;
	            
	        }
	return 0;
}

