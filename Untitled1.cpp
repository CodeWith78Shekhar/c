#include<iostream>
using namespace std;
int main(){
	int n=4;
	int arr[n]={1,2,3,4};
	int x=0;
	int ans=4;
	for(int i=0;i<4;i++){
		if(arr[i]<=x){
			if(arr[i]<=x && arr[i]==x){
			ans=i-1;	
			}else if(arr[i]<x  && arr[i]!=x){
			ans=n;	
			}
			
		}else if(arr[0]>x){
			ans=0;
			break;		}
		else{
			
             break;
		}
	}
	cout<<ans;
    return 0;
}
