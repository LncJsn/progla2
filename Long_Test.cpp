#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class Person{
	public:
		string name;
		int age;
};

class Student : public Person{
	private:
		int stud_num;
		int q1_score;
	public:
		string course;
		void set_stud_num(int);
		int get_stud_num();
		
		void set_q1_score(int);
		int get_q1_score();
		
};


void Student::set_stud_num(int num){
	stud_num = num;
};

int Student::get_stud_num(){
	return stud_num;
};

void Student::set_q1_score(int num1){
	q1_score = num1;
};

int Student::get_q1_score(){
	return q1_score;
};

int main(){
	Student student[100];
	
	Student stud1;
	int x[3];
	
	Student stud2;
	int y[3];
	
	int j=0, k=0, avg=0;
	for(int i=0;i<100;i++){
		j++;
		cout << j << ". Student" << endl;
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
		
	for(int i=0;i<3;i++){
		k++;
		cout << k << ". Enter the Student's Name:" ;
		cin >> student[i].name;
		cout << endl;
		
		cout << k << ". Enter the Student's Age:" ;
		cin >> student[i].name;
		cout << endl;
		
		cout << k << ". Enter the Student's Student Number:" ;
		cin >> 	x[i];
		stud1.set_stud_num(x[i]);
		cout << endl;
		
		cout << k << ". Enter the Student's Score in Quiz#1:" ;
		cin >> y[i];
		stud2.set_q1_score(y[i]);
		cout << endl; 
		
		cout << k << ". Enter the Student's Course:" ;
		cin >> student[i].course;
		cout << endl;
	}
	
	cout << endl;
	cout << endl;
	cout << endl;
		
	for(int i=0;i<3;i++){
		avg = avg +	y[i];
		stud2.set_q1_score(y[i]);
	}
		avg = avg/3;
		cout << "The Average of Student's Quiz#1 is:" << avg ; 

}
