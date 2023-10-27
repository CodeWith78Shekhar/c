#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v(5);
	
	for(int i=0;i<5;i++){
		cin>>v[i];
	} 
	
	
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	v.insert(v.begin()+2,0);
	
	//for each 
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	v.erase(v.end()-2);
		for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
