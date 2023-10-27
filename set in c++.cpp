#include<iostream>
#include<set>
using namespace std;

int main(){
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(3);
	
	for(auto ele:s){
		cout<<ele<<" "<<;
	}
	cout<<"\n";
	s.erase(3);
	for(auto ele:s){
		cout<<ele<<" "<<endl;
	}
	
	s.erase(s.begin());
	for(auto ele:s){
		cout<<ele<<" "<<endl;
	}
}
