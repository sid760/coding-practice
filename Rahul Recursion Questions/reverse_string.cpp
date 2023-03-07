//reverse a string using recursion
#include<iostream>
#include<string.h>
using namespace std;
string reverse_string(string s,int n,string newS){
	if(n<0){
		return "";
	}
	newS+=s[n]+reverse_string(s,n-1,newS);
	return newS;
}
int main(){
	string s="12345";
	
	cout<< reverse_string(s,s.length()-1,"");
	return 0;
}