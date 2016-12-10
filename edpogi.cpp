#include <iostream>
using namespace std;

int main ()
{
	
	for (int x=1; x<=100; x++ )
	 	if (x % 3 == 0 && x % 5 == 0 )
		{
			cout << "Pogi \n" ;
		}
		
	 	 else if (x % 5 == 0)
		{
			cout << "Ed \n" ;
		}
		
	 	 else if (x % 3 == 0)
		{
			cout << "Ed Pogi \n" ;
		}
		else 
		{
			cout << x << endl;
		}
		

	return 0;
}

