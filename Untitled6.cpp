#include<iostream>
using namespace std;
int main(){
	int n=5;
	int m=5;
	int count=0;
	
	int arr1[5] = {1,2,3,5,4};
	int arr2[5] = {4,5,8,2,1};
	 int arr3[count];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr1[i] == arr2[j] ){
				arr3[count] = arr2[j];
				count++;
			}
		}
	}
for(int i=0;i<count;i++){
	cout<<arr3[i]<<" ";
}
}
