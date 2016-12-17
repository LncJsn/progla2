#include <iostream>
using namespace std;
struct Person {
	int toes;
	int knees;
	int shoulder;
	int head;	
};
int main(){
	Person Person;
	
	cin>>Person.toes;
	cin>>Person.knees;
	cin>>Person.shoulder;
	cin>>Person.head;
	
	cout<<Person.toes;
	cout<<Person.knees;
	cout<<Person.shoulder;
	cout<<Person.head;
	return 0;
}
