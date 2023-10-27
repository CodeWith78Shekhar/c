//copy stack -- copy contents of one stack to another in same order
#include<iostream>
#include<stack>
using namespace std;

stack<int> copystack(stack<int> &input){
	stack<int> temp;
	while(!input.empty()){
		//do the process till the time input stack doesnot become empty
		int curr = input.top();  //[1,2,3]
		input.pop();
		temp.push(curr); //[3,2,1] 		
	}
	stack<int> result;
	while(!temp.empty()){
		int curr = temp.top();
		temp.pop();
		result.push(curr);
	}
	return result;
}
int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	stack<int> res = copystack(st);
	
	while(! res.empty()){
		int curr = res.top();
		res.pop();
		cout<<curr<<" ";
	}
	
	
	return 0;
}
