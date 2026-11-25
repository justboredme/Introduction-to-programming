#include <iostream>
using namespace std;

//Base class
class Animal {
    public:
    //NOTE: We are NOT using the 'virtual' keyword here yet!
  virtual  void speak(){
        cout << "Animal makes a generic sound." << endl;

    }
};
//DERIVED CLASS
class Dog : public Animal {
    public:
    //This overrides the base class method
     void speak(){
        cout << "Dog barks: Woof! Woof!"<< endl;
    }
};
int main(){
    cout << "---Without Virtual Keyword---" << endl;
    //We create a POINTER of type Animal(Base)
    Animal*myPet;

    //We point it to a Dog object
    myPet = new Dog();

    //We call speak()
    myPet->speak();
    
    delete myPet;
    return 0;
}