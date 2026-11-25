#include <iostream>
#include <fstream> //REQUIRED for file input/output
using namespace std;

int main() {
    //1. OPEN FILE FOR READING (INPUT)
 //ifstream stands for input file stream
 ifstream inputFile ("NUMBERS.TXT");

 if (!inputFile.is_open()) {
    cout << "Error : Could not open NUMBERS.TXT for reading!" << endl;
    return 1;// Exit with error code

 }
 int num;
 int sum =0;

 cout << "Reading numbers from a file..." << endl;
 //2. READ DATA IN A LOOP

 // The operator '>>' extracts data from the file lie 'cin'.
 // It returns falsely when it reaches the end of the file

 while (inputFile >> num) {
    cout << "Read: " << num << endl;
    sum += num;
 }
 // 3.CLOSE THE FILE
 //Remember to close the file 
 inputFile.close();

 cout <<"Total sum: " << sum << endl;
//4. OPEN FILE FOR WRITING(OUTPUT)
//ofstream stands for "output file stream"
//if sum.txt doesn't exist, it creates it. if it does it's overwritten
ofstream outputFile("SUM.TXT");

if (!outputFile.is_open()) {
    cout << "Error: Could not create sum.txt for writing!" << endl;
    return 1;
}
//5. WRITE DATA TO THE FILE
//The '<<' operator writes to the file just like 'cout' writes to the screen.
outputFile << "The total sum is: " << sum << endl;
outputFile << "Calculated automatically by the C++ program." << endl;

//6.CLOSE THE OUTPUT FILE
outputFile.close();

cout << "Result successfully savd to sum.txt!" << endl;

return 0;

}