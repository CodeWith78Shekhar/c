#include<iostream>
using namespace std;

class student{
	string name;
	public:
		   //data member(attributes)
		int age;
		bool gender;
		
		void setName(string s,int a,bool g){
			name=s;
			age=a;
			gender=g;
		}
		
		void getName(){
			cout<<name<<endl;
		}
		
//		void printinfo(){
//			cout<<"Name= "<<name<<endl;
//			cout<<"Age= "<<age<<endl;
//			cout<<"Gender= "<<gender<<endl;
//		}
};

int main(){
//	student arr[3];
//	for(int i=0;i<3;i++){
//		string s;
//		cout<<"Name= ";
//		cin>>s;
//		arr[i].setName(s);
//		cout<<"Age= ";
//		cin>>arr[i].age;
//		cout<<"Gender= ";
//		cin>>arr[i].gender;
//	}
//	
//	for(int i=0;i<3;i++){
//		arr[i].printinfo();
//	}
	
	student a("urvi",20,1);
	a.getName();
	
	return 0;
}
