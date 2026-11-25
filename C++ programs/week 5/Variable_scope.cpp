#include <iostream>
using namespace std;

int globalcounter = 100;

void displayGlobal() {
    cout << "Inside displayGlobal: globalCounter = " << globalcounter << endl;
}
void modifyGlobal(){
    globalcounter = 999;
    cout << " Inside modifyGlobal: globalCounter changed to " << globalcounter << endl;

}

void localDemo() {
    int localValue = 75;
    cout << "Inside localDemo: localValue = " << localValue << endl;
    cout << "Inside localDemo: globalCounter = " << globalcounter << endl;
}

int main(){
    int localCounter = 50;
    cout << "In main: globalCounter= " << globalcounter << endl;
    cout << "IN main: localCounter =" << localCounter << endl;
displayGlobal();
modifyGlobal();
localDemo();

cout<< "Back in main: globalCounter = " << globalcounter << endl;
return 0;

}