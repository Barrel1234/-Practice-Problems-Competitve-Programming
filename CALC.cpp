#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double A,B;
    double C = 0;
    char ch;
    cin>>A>>B>>ch;
    switch(ch){
        case '+':
        C=A+B;
        cout<<C<<endl;
        break;
        case '-':
        C=A-B;
        cout<<C<<endl;
        break;
         case '*':
        C=A*B;
        cout<<C<<endl;
        break;
        case '/':
        C=A/B;
        cout<<fixed<<setprecision(6)<<C<<endl;
        break;
        default:
        cout<<"      "<<endl;
        break;
    }
    return 0;
}
