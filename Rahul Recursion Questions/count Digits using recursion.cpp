//count digits in a Number and find its Sum
#include<iostream>
using namespace std;
int count=0;
int  countDigit(int n,int &sum){
	if(n==0){
		return count;
		}
	sum+=n%10;
	count++;
	return countDigit(n/10,sum); 
	
}

int main(){
	int n=1234;
	int sum=0;
	cout<<"No. of digits in "<<n<<" are ";
	cout<<countDigit(n,sum);
	cout<<"\nAnd its sum of digits is "<<sum; 
	return 0;
}