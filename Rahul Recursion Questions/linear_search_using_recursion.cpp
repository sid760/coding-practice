//linear search
#include<iostream>
using namespace std;
bool linear_search(int arr[],int n,int k){
	if(n==0){
		return false;
	}
	if(arr[n]==k){
		cout<<"Element "<<k<<" found at index "<<n<<endl;
		return true;
	}
	
	return linear_search(arr,n-1,k);
}
int main(){
	int arr[10]={1,9,8,2,3,4,5,6,7,10};
	cout<<linear_search(arr,10,10);
	return 0;
}