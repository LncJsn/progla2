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
	student stud1;	
	cout << "Enter Student Name:";
	cin >> stud1.name;
	cout << "\n";

	cout << "Enter Student ID Number:" ;
	cin >> stud1.id_num;
	cout << "\n";

	cout << "Enter the Number of Subjects:" ;
	cin >> stud1.num_of_subjects;
	cout << "\n";

	cout << "Enter the Number of Books:" ;
	cin >> stud1.num_books;
	cout << "\n";
	//prof
	prof prof1;
	cout << "Enter Prof Name:";
	cin >> prof1.name;
	cout << "\n";

	cout << "Enter Professor ID Number:" ;
	cin >> prof1.id_num;
	cout << "\n";

	cout << "Enter Tin Number:" ;
	cin >> prof1.tin;
	cout << "\n";
	//staff
	staff staff1;
	cout << "Enter Staff's Name:";
	cin >> staff1.name;
	cout << "\n";

	cout << "Enter Staff's ID Number:" ;
	cin >> staff1.id_num;
	cout << "\n";

	cout << "Enter SSS number:";
	cin >> staff1.sss;
	cout << "\n";
	//Output's
	//Student
	cout << "Student:\n";
	cout << "Student Name:" << stud1.name<< endl;
	cout << "Student ID Number:"<< stud1.id_num<< endl ;
	cout << "The Number of Subjects:"<< stud1.num_of_subjects<< endl ;
	cout << "The Number of Books:"<< stud1.num_books<< endl ;
	cout << "\n\n\n";
	//Prof
	cout << "Professor:\n";
	cout << "Prof Name:"<<  prof1.name << endl;
	cout << "Professor ID Number:"<<  prof1.id_num << endl ;
	cout << "Tin Number:"<<  prof1.tin << endl ;
	cout << "\n\n\n";
	//Staff
	cout << "Staff\n";
	cout << "Staff's Name:"<< staff1.name << endl;
	cout << "Staff's ID Number:"<< staff1.id_num << endl ;
	cout << "SSS number:"<< staff1.sss << endl;
	return 0;
}
