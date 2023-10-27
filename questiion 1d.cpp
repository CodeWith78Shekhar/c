//Q2-maximum element of an array
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	float arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	float max = -1;
	for(int i=0;i<n;i++){
		max = max(arr[i] , max);
	}
	
	cout<<max<<;
	
	
}
