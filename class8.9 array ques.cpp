#include<iostream>
#include<climits>
using namespace std;

int main(){
	int mx = -1;
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		mx= max(mx,arr[i]);
		arr[i]=mx;
		
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
	
}
