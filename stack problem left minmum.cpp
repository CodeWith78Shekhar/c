#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[6] = {4,5,8,7,9,6};  //-1 -1 7 6 6 -1
	stack<int> st;
	int n=6;
	vector<int> ans(n,-1);
	for(int i=0;i<n;i++){
		if(st.empty()){
			st.push(a[i]);
			continue;
		}
		
		while(!st.empty() && st.top()>a[i]) st.pop();
		if(!st.empty())ans[i]= st.top();
		
		st.push(a[i]);
	}
	
	for(auto it:ans) cout<<it<<" ";
}
