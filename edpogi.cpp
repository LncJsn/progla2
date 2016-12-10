#include<iostream>

using namespace std;

int main (){
	int a;
	for (int a=1; a<101; a++){
	if (a%3 == 0 && a%5 == 0){
	cout<<"Ed Pogi\n";
}
	else if (a%3 == 0){
	cout<<"Pogi\n";
}
	else if (a%5 == 0){
	cout<<"Ed\n";
	}
	else
	cout<<a<<endl;
}
return 0;
}
