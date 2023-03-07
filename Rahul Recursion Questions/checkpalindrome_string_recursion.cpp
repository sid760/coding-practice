//String is palindrom or not
#include<iostream>
#include<string.h>
using namespace std;

bool check(string S, int n,int i,int j){
	if(i>j){
		return true;
	}
	if(S[i]!=S[j]){
		return false;
	}
	return check(S,n,i+1,j-1);
}
int main(){
	string S="123421";
	cout<<S<<" is Palindrome ? "<<endl;
	cout<< check(S,S.length()-1,0,S.length()-1);
	return 0;
}