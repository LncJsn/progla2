#include <iostream>
using namespace std;

struct Person
{
	int toes;
	int knees;
	int shoulder;
	int head;
};
 int main()
 {
	 Person person[5];
	 for (int i=0;i<5;i++)
	 {
	 	cin >> person[i].toes >> endl;
	 	cin >> person[i].knees >> endl;
	 	cin >> person[i].shoulder >> endl;
	 	cin >> person[i].head >> endl;
	 	
	 }
	  for (int i=0;i<5;i++)
	 {
	 	cout << person[i].toes >> endl;
	 	cout << person[i].knees >> endl;
	 	cout << person[i].shoulder >> endl;
	 	cout << person[i].head >> endl;
	 	
	 }
	 return 0;
}
