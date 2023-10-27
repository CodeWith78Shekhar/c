#include<iostream>
using namespace std;

class student{
	string name;
	int age;
	bool gender;
	public:
		
	student(){
		cout<<"default constructor"<<endl;
	}	
	
	student(string s,int a,int g){  //parametrised constructor
	 cout<<"parametrised constructor"<<endl;
		name = s;
		age = a;
		gender = g;
	}
	
	student(student &a){
		cout<<"copy constructor"<<endl;
		name = a.name;
		age = a.age;
		gender = a.gender;
	}
	
	void print(){
		cout<<name<<endl;
		cout<<age<<endl;
		cout<<gender<<endl;
	}	
};

int main(){
	student arr("roy",45,1);
	arr.print();
	
	student b=arr;
	b.print();
}
