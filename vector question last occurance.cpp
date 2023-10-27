#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
  v.push_back(1);
 v.push_back(4);
  v.push_back(8);
   v.push_back(2);
    v.push_back(4);	
	cout<<"enter x : ";
	int x;
	cin>>x;
	
	int occ= -1;
	for(int i=0;i<v.size();i++){
		if(v[i]==x){
			occ = i;
		}
	} 
	cout<<occ<<endl;
	
	return 0;
}
