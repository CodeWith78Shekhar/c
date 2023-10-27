#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
	map<string,int> directory;
	
	directory["naman"] = 3845;
	directory["animesh"]= 5412;
	directory["ritu"]= 8745;
	
	//for(auto element:directory){
	for(auto element:directory){
		cout<<"name- "<<element.first<<endl;
		cout<<"phone no- "<<element.second<<endl;
	}
}
