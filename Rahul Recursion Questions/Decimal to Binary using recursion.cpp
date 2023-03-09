//Decimal to Binary using recurion

#include<iostream>
#include<string>
using namespace std;
int k=0;
void ConvertToBIN(int n,string &s){
	if(n==0){
		return;
	}
	ConvertToBIN(n/2,s);
	if(n%2==0){  
		s+='0';
		k=k*10;
	}
	if(n%2!=0){
		s+='1';
		k=k*10+1;
	}
	
}

int main(){
	int n=100;
	string s="";
	ConvertToBIN(n, s);	
	cout<<"String output:-"<<s<<endl;
	cout<<"int output:-"<<k<<endl;
	return 0;
}