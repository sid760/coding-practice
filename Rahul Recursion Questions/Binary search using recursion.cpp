//binary search using recursion
#include<iostream>
using namespace std;
bool binarySearch(int arr[],int n, int s,int e,int key){
	int mid=s+(e-s)/2;
	if(arr[mid]==key){
		cout<<"Element found at "<<mid<<endl;
		return true;
	}
	if(s>e){
		cout<<"element Not found";
		return false;
	}
	
	if(key<arr[mid]){
		return binarySearch(arr,mid,s,mid-1,key);
	}
	if(key>arr[mid]){
		return binarySearch(arr,mid,mid+1,e,key);
	}
	
	
}


int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<binarySearch(arr,10,0,9,10);
	return 0;
}