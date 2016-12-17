#include <iostream>
using namespace std;
struct Person {
	int toes;
	int knees;
	int shoulder;
	int head;	
};
int main(){
	Person person;
	
	cin>>person.toes;
	cin>>person.knees;
	cin>>person.shoulder;
	cin>>person.head;
	
	cout<<person.toes;
	cout<<person.knees;
	cout<<person.shoulder;
	cout<<person.head;
	return 0;
}
