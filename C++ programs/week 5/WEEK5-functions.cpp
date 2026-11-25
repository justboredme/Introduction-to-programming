#include <iostream>
using namespace std;

// FUNCTION: swapByReference
//Purpose: Attempts to swap two integers
//Parameters: a and b 

void swapByReference(int &a, int &b){
    cout <<" Inside function- Before swap: a = " << a << " b= "<< b << endl;
    int temp =a;
    a=b;
    b=temp;
    cout << "Inside function - After swap: a = " << a <<",b=" << b << endl;
}
int main (){
    int x =10;
    int y= 20;
    cout << "Before calling swapByReference:" << endl;
    cout << "x=" << x << " y= " << y << endl;
    swapByReference(x, y);

    cout << " After calling swapByReference =:" << endl;
    cout <<"x=" << x << "y=" << y << endl;

    cout <<"\nExplanation: The function recieved REFERENCES of x and y" << endl;
    cout << "Changes made inside the function do not affect the originals" << endl;

    return 0;

}