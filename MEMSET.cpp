 #include<iostream>
 #include<cstring>
 using namespace std;
 int main()
 {
 	/*int a[10]={0};
 	cout<<a[5]<<endl;
 	
 	int b[10]={2};
 	cout<<b[5]<<endl;*/
 	/*int n;
 	cin>>n;
 	int a[n]={0};
 	cout<<a[5]<<endl;*/
 	int n;
 	cout<<"Input the size of array"<<endl;
 	cin>>n;
 	int a[n]; //block name -- a //memset declaration /* memset(variable name,values,sizeof(variablename));
 	memset(a,0,sizeof(a)); // value --> 0 or -1only
 	for(int i=0;i<9;i++){
 		cout<<a[i]<<"";
    }
	 cout<<endl;

 	return 0;
 }
