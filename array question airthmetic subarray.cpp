//#saraswati has an array of N non-negative integers.the i-th integetof the array
//#is A(i). she wants to choose a contiguous airthmetic subarray from her array that has the 
//#maximum length.please help her to determine the length of the longest contiguous airthmetic subarray.
//
//#intuition and approach
//#loop over the array and find the answer.
//#maintain the following variables
//#1.previous common difference(pd)
//#2.current airthmetic subarray length(curr).
//#3.max arithemetic subarrays length(ans)

#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int ans = 2;
	int pd = arr[1]-arr[0];
	int j=2;
	int curr = 2;
	
	while(j<n){
		if(pd == arr[j]-arr[j-1]){
			curr++;
		}
		else{
			pd = arr[j] -arr[j-1];
			curr =2;
		}
		ans = max(ans,curr);
		j++;
	}
	cout<<ans <<endl;
	return 0;
}
