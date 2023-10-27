//koko eating bananas pproblem.we find mimimum number of banaans eaten by koko in guven hours
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool canEat(vector<int>a,int h,int mid){
	int hrs=0;
	
	for(int i=0;i<a.size();i++){
		if(a[i]%mid==0){
			hrs+=a[i]/mid;
		}else{
			hrs+=(a[i]/mid)+1;
		}
		if(hrs>h) return false;
	}
	return true;
}
int main(){
	int n=4;
	int h=8;
	vector<int>a;
	
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back(x);
	}
	int s=0;
	int e=1e9;
	int ans=n;
	while(s<=e){
		int mid= s+(e-s)/2;
		
		if(canEat(a,h,mid)){
			ans=mid;
			e=mid-1;
		}else{
			s=mid+1;
		}
	}
cout<<ans;	
}
