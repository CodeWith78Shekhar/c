#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<int,string> record;
	//roll no , name
	
	record.insert(male_pair(3,"ria"));
	record[1]="pushpa";
	record[5]="ramu";
	
	for(auto pair:record){
		cout<<"roll no - "<<pair.first<<endl;
		cout<<"name - "<<pair.second<<endl;
	}
	
	return 0;
}

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
	unordered_map<int,string> record;
	//roll no , name
	
	record.insert(male_pair(3,"ria"));
	record[1]="pushpa";
	record[5]="ramu";
	
	for(auto pair:record){
		cout<<"roll no - "<<pair.first<<endl;
		cout<<"name - "<<pair.second<<endl;
	}
	
	return 0;
}
