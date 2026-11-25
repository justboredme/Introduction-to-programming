#include <iostream>
#include <fstream>
#include <stdexcept>// Required for standard exceptions

using namespace std;

//METHOD 1: Using exceptions (The old C way)

bool readFileWithReturnCode(const string& filename) {
ifstream file(filename);
if (!file.is_open()) {
// We must manually pass the error back up
return false;
}
// ... read file ...
return true;
}

//METHOD 2:using Exceptions(The modern C++ way)

void readFileWithException(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        //We actively THROW an error. The program will immediately stop
        // looking for the file and jump to the catch block.
        throw runtime_error("File not found: " + filename);
    }
}
int main() {
    cout << "---Testing Return code strategy---" << endl;
    if (readFileWithReturnCode("data.txt") == false) {
        cout << "Return code: Handled error gracefully. Program continues." << endl;

    }

    cout << "/n--- Testing Exception Strategy---" << endl;
    //We put the dangerous code in a 'try' block
    try {
        readFileWithException("data.txt");

    }
// If an exception is thrown, the 'catch' block handles it.
catch (const runtime_error& e) {
cout << "Exception Caught: " << e.what() << endl;
cout << "Exception Strategy: Forced us to handle the error!" << endl;
}

return 0;
}