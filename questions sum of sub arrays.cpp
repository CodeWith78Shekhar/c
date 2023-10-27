//sum of all subarrays
//given an array a[] of size n. output sum of each subarray of the given array

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int sum =0;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			 sum = sum + arr [j];
			cout<<sum<<" ";
		}
	}

return 0;	
}
