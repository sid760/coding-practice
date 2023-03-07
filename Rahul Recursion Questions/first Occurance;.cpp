// to return first and last  ocuurace
#include<iostream>
using namespace std;
int position(int arr[],int n,int x){
	if(n==0){
		return 0;
	}
	if(arr[n-1]==x){
		//cout<<"last occurance:-"<<n-1;
		return n-1;
	}
	position(arr,n-1,x);
int main(){
	int arr[10]={1,2,3,4,5,6,7,3,9,10};
	cout<<"Position:- "<<position(arr,10,3);
	return 0;
}