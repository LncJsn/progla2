
#include <iostream>
using namespace std;

struct Person {
	int toes;
	int knees;
	int shoulder;
	int head;
};
int main(){
	Person person[5];
	for (int i=0; i<5; i++)
	{
	cin>>person[i].toes;
	cin>>person[i].knees;
	cin>>person[i].shoulder;
	cin>>person[i].head;
}	
	for (int i=0; i<5; i++)
	{
	cout<<"Person Number: "<<i+1<<endl;
	cout<<person[i].toes<<endl;
	cout<<person[i].knees<<endl;
	cout<<person[i].shoulder<<endl;
	cout<<person[i].head;
}
	return 0;
}
