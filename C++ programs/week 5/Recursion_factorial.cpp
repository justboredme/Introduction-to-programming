#include <iostream>
using namespace std;

// Formula: n! =n*(n-1)!
//Base case:0! = 1

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n * factorial(n - 1);
}
int factorialTail(int n, int accumulator = 1){
    if(n<= 1){
        return accumulator;
    }
    return factorialTail(n - 1, n * accumulator);
}
int main(){
    int num;
    cout << "Enter a number to calculate factorial: ";
    cin >> num;
    if (num < 0){
        cout << " Factorial is not a defined for negative numbers." << endl;
        return 1;}
    
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
        cout << "\nUsing tail recursion:" << endl;
        cout << num << "! = " << factorialTail(num) << endl;


        cout << "\n---Comparison---" << endl;
        cout << "Simple recursion: Clear, matches the mathematical definition." << endl;
        cout << "Tail recursion: Passes the accumulated result as an argument; "
                "it may be optimized by a compiler, but C++ does not guarantee this." << endl;
        return 0;

}
