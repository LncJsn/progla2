#include <iostream>
using namespace std;

int Sum (int n1, int n2)
{
		return n1+n2;
}

int Difference (int n1, int n2)
{
		return n1-n2;
}

int Product (int n1, int n2)
{
		return n1*n2;
}

int Quotient (int n1, int n2)
{
		return n1/n2;
}

int main ()
{
	int n1,n2;
	
	cout << "Enter num 1: ";
	cin >> n1;
	
	cout << "Enter num 2: ";
	cin >> n2;
	
	cout << "Sum is: " << Sum(n1,n2) << endl;
	cout << "Difference is: " << Difference(n1,n2) << endl;
	cout << "Product is: " << Product(n1,n2) << endl;
	cout << "Quotient is: " << Quotient(n1,n2) << endl;
	
	return 0;
}
