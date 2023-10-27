#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v;
	while(n--){
		int x;
		cin>>x;
		v.push_back(x);
	}
	vector<int> output(v.size(),-1);
	stack<int> st;
	st.push(0);
	
	for(int i=1;i<v.size();i++){
		while(!st.empty() && v[i]> v[st.top()]){
			output[st.top()] = v[i];
			st.pop();
			
		}
		st.push(i);
			}
		while(!st.empty()){
			output[st.top()] = -1;
			st.pop();
		}

	for(int i=0;i<v.size();i++){
		cout<<output[i]<<" ";
	}
	return 0;
}
