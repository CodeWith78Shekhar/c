//map question
//sum of repetetive elements
//you are given an integer n,representing the number of elements. thenou will be given n elements . oyou hVE TO RETURN 	the sum of repetitive elements. that appear more than one time
//n=7;
//elements = [1,1,2,1,3,3,3]
//output = 4;

 #include<iostream>
 #include<map>
 #include<vector>
 using namespace std;
 
 int main(){
 	int n;
 	cin>>n;
 	
 	vector<int> input(n);
 	for(int i=0;i<n;i++){
 		cin>>input[i];
	 }
	 
	 map<int,int> m;
	 for(int i=0;i<n;i++){
	 	//storing frequency of every element in input array
	 	m[input[i]]++;
	 }
	 
	 int sum=0;
	 //finding sum of repetitive elements
	 //pair-element, frequency
	 for(auto pair:m){
	 	if(pair.second>1){
	 		//element is rpetitive
	 		sum+=pair.first;
		 }
	 }
	 cout<<"ans = "<<sum<<endl;
 }
