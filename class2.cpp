#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

class tango{
	public:
		string name;
		int id_num;
};

class student : public tango{
	public:
		int num_of_subjects;
		int num_books;		
};

class prof : public tango{
	public:
		int tin;
};

class staff : public tango{
	public:
		int sss;
};

int main(){
	student stud[3];
	prof prof[3];
	staff staff[3];

	for (int i=0; i<3; i++){
		cout << "Enter Student's Name"<<i<<":\n";
		cin >> stud[i].name;
		cout << "\n";
		
		cout << "Enter Student's ID Number"<<i<<":\n";
		cin >> stud[i].name;
		cout << "\n";
		
		cout << "Enter the Number of Subjects"<<i<<":" ;
		cin >> stud[i].num_of_subjects;
		cout << "\n";
		
		cout << "Enter the Number of Books"<<i<<":" ;
		cin >> stud[i].num_books;
		cout << "\n";	
		
		cout << "Enter Prof Name"<<i<<":";
		cin >> prof[i].name;
		cout << "\n";
		
		cout << "Enter Professor ID Number"<<i<<":" ;
		cin >> prof[i].id_num;
		cout << "\n";
		
		cout << "Enter Tin Number"<<i<<":" ;
		cin >> prof[i].tin;
		cout << "\n";
		
		cout << "Enter Staff's Name"<<i<<":";
		cin >> staff[i].name;
		cout << "\n";
		
		cout << "Enter Staff's ID Number"<<i<<":" ;
		cin >> staff[i].id_num;
		cout << "\n";
		
		cout << "Enter SSS number"<<i<<":";
		cin >> staff[i].sss;
		cout << "\n";
	}
	
	for (int i=0; i<3; i++){
	cout << "Student Name"<<i<<":" << stud[i].name<< endl;
	cout << "Student ID Number"<<i<<":"<< stud[i].id_num<< endl;
	cout << "The Number of Subjects"<<i<<":"<< stud[i].num_of_subjects<< endl;
	cout << "The Number of Books"<<i<<":"<< stud[i].num_books<< endl;
	cout << "\n\n\n";
	
	cout << "Prof Name"<<i<<":"<<  prof[i].name << endl;
	cout << "Professor ID Number"<<i<<":"<<  prof[i].id_num << endl ;
	cout << "Tin Number"<<i<<":"<<  prof[i].tin << endl ;
	cout << "\n\n\n";
	
	cout << "Staff's Name"<<i<<":"<< staff[i].name << endl;
	cout << "Staff's ID Number"<<i<<":"<< staff[i].id_num << endl ;
	cout << "SSS number"<<i<<":"<< staff[i].sss << endl;
	}
	return 0;
}

