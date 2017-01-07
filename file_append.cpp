#include <stdio.h>
#include<iostream>
using namespace std;
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r"); //read

    int i;
    int numberArray[5];

    for(int i=0; i<5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }
    fclose(myFile);
    
    myFile = fopen("sample.txt", "w"); //write
    for(int i=0; i<5; i++){
		fprintf(myFile, "%d\n", numberArray[i]);
    }
    
    for(int i=0; i<5; i++){
		fprintf(myFile, "%d\n", numberArray[i]+4);
    }
    
}
