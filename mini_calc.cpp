#include<iostream>
using namespace std;
int get_sum (int a, int b){
return a+b;
}
int get_diff (int a, int b){
return a-b;
}
float get_prod (float a, float b){
return a*b;
}
float get_quo (float a, float b){
return a/b;
}
int main (){
	int num1, num2;
	cout<<"Enter num 1: ";
	cin>>num1;
	cout<<"Enter num 2: ";
	cin>>num2;
		cout<<"Sum is: " <<get_sum(num1,num2) <<endl;
		cout<<"Difference is: "<<get_diff(num1,num2) <<endl;
		cout<<"Product is: "<<get_prod(num1,num2)<<endl;
		cout<<"Quotient is: " <<get_quo(num1,num2);
return 0;
}
