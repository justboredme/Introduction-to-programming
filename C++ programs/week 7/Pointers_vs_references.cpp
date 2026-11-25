#include <iostream>
using namespace std;

int main() {
    int originalValue = 100;
    int& refValue = originalValue;

int* ptrValue = &originalValue;

cout << "---Initial state---" << endl;
cout << "Original Value: " << originalValue << endl;
cout << "refvalue:" << refValue << endl;
cout << " ptrValue points to: " << *ptrValue << endl; // *defernces to get the value of the pointer

refValue = 200;
cout << "\n ---After setting refValue = 200 ---" << endl;
cout << "OriginalValue: " << originalValue << endl;
cout << " ptrValue points to: " << *ptrValue << endl;

//  MOD 2
*ptrValue = 300;
cout << "\n ---After setting *ptrValue = 300 ---" << endl;
cout << "originalValue: " << originalValue << endl;
cout << "refValue: " << refValue << endl;

// MOD 3
int anotherValue = 500;
ptrValue = &anotherValue;

cout << "\n---After pointing ptrValue to anotherValue---" << endl;


cout << "originalValue: " << originalValue << endl;
cout << "ptrValue points to: " << *ptrValue << endl;

return 0;
    
}