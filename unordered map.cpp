#include<iostream>
#include<map>
using namespace std;

int main(){
	multimap<string,int> directory;
	
	directory.insert(make_pair("urvi",625645));
	directory.insert(make_pair("saghvi",561245));
	directory.insert(make_pair("urvi",45625));
	
	for(auto pair:directory){
		cout<<pair.first<<" "<<pair.second<<endl
	}
}


#include<iostream>
#include<map>
using namespace std;

int main(){
	multimap<string,int> directory;
	
	directory.insert(make_pair("urvi",625645));
	directory.insert(make_pair("saghvi",561245));
	directory.insert(make_pair("urvi",45625));
	
	for(auto pair:directory){
		cout<<pair.first<<" "<<pair.second<<endl
	}
}


