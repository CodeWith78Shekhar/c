//Q4- duplicate array
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	float arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//int count =0;
   for(int i=0;i<n;i++){
   	       for(int j=i+1;j<n;j++){
   	       	if(arr[i] == arr[j]){
   	       		cout<<arr[j];
				  }
			  }
   }
   return 0;
}
