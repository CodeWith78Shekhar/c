//insert at bottom/any index
#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &st, int x){
	stack<int> temp;
	while(!st.empty()){
		int curr = st.top();
		st.pop();
		temp.push(curr);
	}
	st.push(x); // this is the point where x got inserted at the bottom
    
	while(!temp.empty()){
		int curr = temp.top();
		temp.pop();
		st.push(curr);
	}	
}


int main(){
	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);

   insertAtBottom(st,10);
while(!st.empty()){
		int curr = st.top();
		st.pop();
		cout<<curr<<" \n";
	}
	return 0;
}
