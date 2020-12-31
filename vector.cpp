#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int > v;
    v.push_back(10);
    v.push_back(23);
    v.push_back(22);
    v.push_back(78);
    v.push_back(98);
    
    // iterators // pointers
    
    // sort // ascending to descending...
    sort(v.begin(),v.end());  // important
    
    v.pop_back();
    int k  = (int)v.size();   // k=5
    
    
    
    
    for(int i=0;i<k;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

