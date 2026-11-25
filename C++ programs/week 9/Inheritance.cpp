#include <iostream>
#include <string>
using namespace std;

//--------------------------------
// BASE CLASS (Parent)
//--------------------------------

class Shape{
    protected:
    //'protected' is like private, but derived classes CAN access it 
    string color;

    public:
    Shape(string c) {
        color = c;
        cout << " Shape constructor called." << endl;
    }
    //A method that all shapes share
    void displayColor(){
        cout << "Color: " << color << endl;
    }
};
//--------------------------------
// DERIVED CLASS (Child)
// The syntax ': public shape' means "Circle inherits from shape"

//--------------------------------

class Circle : public Shape{
    private:

    double radius;

    public:
    // Constructor: Must call the base class constructor
    Circle(string c, double r) : Shape(c) {
        radius = r;
        cout << "Circle constructor called." << endl;

    }
    
    void displayCircleInfo() {
        //We can use 'color' here because it is protected in the base class!
        cout << "This circle is " << color
             << " and has a radius of " << radius << endl;

    }
};

// Another derived class
class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(string c, double w, double h) : Shape(c) {
        width = w;
        height = h;
        cout << "Rectangle constructor called." << endl;
    }

    void displayRectangleInfo() {
        cout << "This rectangle is " << color << " and is "
             << width << "x" << height << endl;
    }
};

int main(){
    cout <<"---Creating a Circle---" << endl;
    Circle myCircle("Red",5.0);
    myCircle.displayColor();// Inherited method from Shape

    myCircle.displayCircleInfo();// Unique method from Circle

    cout << "\n--- Creating a Rectangle---" << endl;
    Rectangle myRect("Blue", 4.0,6.0);
    myRect.displayColor();//Inherited method from Shape
    myRect.displayRectangleInfo();//Unique method from Rectangle 


}
