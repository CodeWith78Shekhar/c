#include<bits/stdc++.h>
using namespace std;

//int power(int n, int p){
//	
//	if(p==0){
//		return 1;
//	}
//	
//	int prevPower = power(n,p-1); 
//	return n*prevPower;
//}
//
//int main(){
//	int n,p;
//	cin>>n>>p;
//	
//	cout<<power(n,p);
//	return 0;
//}

int factorial(int n){
	if(n==0){
		return 1;
	}
	
	int prevfact = factorial(n-1);
	return n* prevfact;
}

int main(){
	int n;
	cin>>n;
	cout<<factorial(n);
}
