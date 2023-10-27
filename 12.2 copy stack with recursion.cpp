#include<iostream>
#include<stack>
using namespace std;

void f(stack<int> &st, stack<int> &result){
	if(st.empty()) return;
	int curr = st.top();
	st.pop();
	f(st,result);
	result.push(curr);
}

int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	
	stack<int> result;
	f(st,result);
	while(!result.empty()){
		int curr = result.top();
		result.pop();
		cout<<curr<<" ";
	}
}
