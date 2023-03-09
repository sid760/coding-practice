//Print array elements using recursion
#include<iostream>
using namespace std;
void print(int arr[],int n,int& sum){
	if(n<0){
		return ;
	}
	print(arr,n-1,sum);
	cout<<arr[n]<<" ";
	sum+=arr[n];
}


int main(){
	int arr[10]={1,2,3,4,56,6,7,8,9,10};
	int sum=0;
	cout<<"Array  elements are:- "<<endl;
	print(arr,9,sum);
	cout<<endl<<"and Sum of its elements is "<<sum; 
	return 0;
}