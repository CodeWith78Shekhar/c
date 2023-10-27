//question on recursion
//1.array is sorted or not
//#include<bits/stdc++.h>
//using namespace std;
//
//bool sorted(int arr[], int n){
//	if(n==1){
//		return true;
//	}
//	
//	bool restArray = sorted(arr+1,n-1);
//	return (arr[0]<arr[1] && restArray);
//}
//
//int main(){
//	int arr[] = {1,2,7,4,5};
//	cout<<sorted(arr,5);
//	
//}

//print n number
//#include<bits/stdc++.h>
//using namespace std;
//
//void dec(int n){
//	if(n==0){
//		return ;
//	}
//	cout<<n<<endl;
//	dec(n-1);
//}
//
//int main(){
//	int n;
//	cin>>n;
//	dec(n);
//	return 0;
//}

//first and last occurance of a number
#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[],int n,int i, int key){
	if(i==n){
		return -1;
	}
	
	if(arr[i]==key){
		return i;
	}
	return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i,int key){
	  if(i==n){
	  	return -1;
	  }
	  int restArray = lastocc(arr,n,i+1,key);
	  if(restArray!= -1){
	  	return restArray;
	  }
	  if(arr[i]==key){
	  	return i;
	  }
	  return lastocc(arr,n,i+1,key);
}

int main(){
	int arr[] = {4,1,2,5,6,2};
	cout<<firstocc(arr,6,0,2)<<endl;
    cout<<lastocc(arr,6,0,2)<<endl;
}
