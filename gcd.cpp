#include<bits/stdc++.h>
using namespace std;


//int gcd(int a, int b){
//	int dividend = a>=b ? a : b;
//	int divisor  = a<=b ? a : b;
//	while(divisor != 0){
//		int remainder = dividend % divisor;
//		dividend = divisor;
//		divisor  = remainder;
//	}
//	return dividend;
//}


int gcd(int a, int b){
	return b==0 ? a : gcd(b, a%b);
}

int main(){
	int a, b, x;
	cin>>a>>b;
	x=gcd(a,b);
	cout<<x;
}
