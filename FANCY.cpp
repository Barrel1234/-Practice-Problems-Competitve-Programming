#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    getchar();
    
    while(T--)
    {
    int count = 0;
    string s;
    //cin>>s;
   getline(cin,s);
    
    // -- we want to extrat the words --
    stringstream str(s);
    string word;   // it stores the words present in the string s
    while(str>>word)
    {
         
    if(word=="NOT" || word=="not")
       count++;
    }
    if(count>0)
            cout<<"Real Fancy"<<endl;
        else if(count==0)
            cout<<"regularly fancy"<<endl;
   
    
    }
    return 0;
}

