#include<iostream>
#include<map>
#include<string>

using namespace std;

//map is an asociative array
int main(){
	map<string, int> marksMap;
	marksMap["Harry"] = 98;
	marksMap["jack"]  = 59;
	marksMap["rohan"] = 87;
	
	//insert method
//	marksMap.insert({{"kozume", 169}, {"kuroo", 187}});
	map<string, int> :: iterator iter;
	for(iter = marksMap.begin(); iter!=marksMap.end();iter++){
		cout<<(*iter).first<<" "<<(*iter).second<<"\n";
	} 
	
	cout<<"the size is: "<<marksMap.size()<<endl;
	cout<<"the max size is: "<<marksMap.max_size()<<endl;
	cout<<"the empty return value is: "<<marksMap.empty()<<endl;
	return 0;
}
