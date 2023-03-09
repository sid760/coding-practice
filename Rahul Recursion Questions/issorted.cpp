#include<iostream>
using namespace std;
bool issorted(int arr[],int n,int i){
	if(i==n-1){
		return true;
	}
	if(arr[i]>arr[i+1]){
		return false;
	}
	
	issorted(arr,n,i+1);	
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,-19};
	
	cout<<"Sorted:- "<<issorted(arr,10,0)<<endl;
	return 0;
}