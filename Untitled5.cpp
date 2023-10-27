//Q5 - average of a array
#include<iostream>
using namespace std;
float average(float result, int n){
float	avg = result/n;
	cout<<avg;
}
int main(){
	int n;
	cin>>n;
	float arr[n];
	float result = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		result += arr[i];
	}
	
	average(result,n);
	return 0;
}
