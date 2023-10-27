#include<iostream>
using namespace std;

class student{
	private:
	string name;
	int age;
	bool gender;
	
	//constructor
	student(string s,int a, bool g){
		name = s;
		age = a;
		gender = g;
	}
	
	void printInfo(){
		cout<<"Name = ";
		cout<<name<<endl;
		cout<<"Age = ";
		cout<<age<<endl;
		cout<<"gender = ";
		cout<<gender<<endl;
	}
	
};

int main(){
	student arr("ram",85,1);
	arr.printInfo();
}
