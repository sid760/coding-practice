//power of a function
#include<iostream>
using namespace std;
int power(int x,int n){
	if(n==1){
		return x;
	}
		
	return x*power(x,n-1);
}


int main(){
	int x, n;
	cout<<"Number:-";cin>>x;
	cout<<"its Power:-";cin>>n;
	
	cout<<x<<" ki power "<<n <<" :-"<< power(x,n);
	return 0;
}