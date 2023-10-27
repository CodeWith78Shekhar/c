#include<bits/stdc++.h>
#include<stack>
using namespace std;

void removeAtBottom(stack<int> &st){
//	while(st.size()>1){
//		int curr = st.top();
//		st.pop();
//		removeAtBottom(st);
//		st.push(curr);
//		return;
//	}
//	st.pop();

	
   if(st.size() ==1){
   	st.pop();
   	return;
   }
   int curr = st.top();
   st.pop();
   removeAtBottom(st);
   st.push(curr);
}

int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	//int x=100;
	removeAtBottom( st);
	
	while(!st.empty()){
	
		int curr = st.top();
	st.pop();
	cout<<curr<<" ";	
	}
	
}
