//Crystal Zhang and Sarah Shao 
//10/15/2024 
//Lab 6


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
    ifstream inFile; //input file stream variable
    ofstream outFile;

    int int1; //declares the values/variables that will appear on the input file
    int int2; 
    char character;
    string sentence;

    inFile.open("inData.txt"); //opens the input and output files
    outFile.open("outData.txt");

    cout<<"Program to review streams.....\n"; 

    inFile >> int1 >> int2; 
    //makes the computer read the two integers on the input file
    outFile << "Sum of the two integers: " << int1 + int2 << endl; 
    //tells the computer to cout the two integers they read and add them together on the output file

    inFile >> character; 
    //makes the computer read the character on the input file
    char ascii = character + 1; //transforms the character in it's number form plus one into it's ascii letter form 
    outFile << "The character after the inputted character is " << ascii << endl; 
    //tells the computer to cout the ascii value 

    inFile >> sentence; 
    //makes the computer read the sentence on the input file
    outFile << "The sentence is: " << sentence << endl; 
    //tells the computer to print the sentence out on the output file

    inFile.close(); //closes the files
    outFile.close();

return 0;
}