//print n number
#include<iostream>
using namespace std;
void print_1_to_N(int n){
	if(n==0){
		return;
	}
	 cout<<n<<" " ;            //print n to 1
	print_1_to_N(n-1);
//	cout<<n<<" ";               //print 1 to n
}
int main(){
	print_1_to_N(10);
	return 0;
}