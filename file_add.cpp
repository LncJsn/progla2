#include <stdio.h>	
#include <iostream>
using namespace std;

main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int a;
    int i;
    int numberArray[5];

    for (i = 0; i < 5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }

    for (i = 0; i < 5; i++){
        printf("Number is: %d\n\n", numberArray[i]);
    }
    
     for (i = 0; i < 5; i++){
        a += numberArray[i];
        
	}
		cout << a ;

}
