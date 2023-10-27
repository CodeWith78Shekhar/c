#include<bits/stdc++.h>
using namespace std;

class Complex{
	private:
		int real, imag;
		public:
			Complex(int r=0,int i=0){
				real=r;
				imag=i;
			}
			
			Complex operator + (Complex const &obj){
				Complex res;
				res.imag= imag + obj.imag;
				res.real= real + obj.real;
				return res;
			}
			
			void display(){
				cout<<real<< " + i"<<imag<<endl;
			}
};

int main(){
	  Complex a(5,3);
	  Complex b(6,9);
	  Complex c= a  + b;
	  c.display();
}
