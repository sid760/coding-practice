#include<iostream>
using namespace std;
int fibo(int n){
	if(n==0 or n==1){
		return n;
	}
	//int ans= fibo(n-1)+fibo(n-2);
//	cout<<ans<<" ";
//	return ans;
int ans;
ans=fibo(n-1)+fibo(n-2); //0 1 1 2 3 5 8 13 21 34 55
cout<<ans<< " ";
	return ans;
	
}
int main(){
	while()
	cout<<fibo(10);
	return 0;
}