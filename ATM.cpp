 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main()
 {
 	int amount;
 	float balance;
 	cin>>amount;
 	cin>>balance;
 	float rem_bal;
 	if(amount%5==0)
 	{
 	if(amount<balance && ((amount+0.50)<=balance))	
 	  {
	     rem_bal=(balance-amount-(0.5));
	     cout<<fixed<<setprecision(2)<<rem_bal<<endl;
	  }
	  else{
	   cout<<fixed<<setprecision(2)<<balance<<endl;
	      }
   }
	 else
	 {
	 	cout<<fixed<<setprecision(2)<<balance<<endl;
	 }
 }
