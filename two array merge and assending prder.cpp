//desceneing elements in array
#include<iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n];
	int arr2[m];
	int arr3[m+n];
	
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	
	for(int j=0;j<m;j++){
		cin>>arr2[j];
	}
	int x=0,y=0;
	for(int k=0;k<m+n;k++){
		if(x<m && y<n){
		
		if(arr1[x]>arr2[y]){
		  arr3[k]=arr2[y];
		  y++;	
		}
		else{
			arr3[k]=arr1[x];
			x++;
		}
	}

    else if(x<m  ){
    	arr3[k]= arr1[x];
	}
	else if (y<n){
		arr3[k]=arr2[y];
	}
}
	for(int k=0;k<m+n;k++){
		cout<<arr3[k]<<" ";
	}

	
return 0;	
}

