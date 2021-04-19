/*
Programming Bonus assignment 1
Isabela Rangel
10/18/18
*/
#include <iostream>
using namespace std;

// Creates the class
class Rectangle
{
public:
  // Data Field
  double width;
  double height;

  // Constructors
  // Constructs a default rectangle object when no arguments are used
  Rectangle()
  {
    height = 1;
    width = 1;
  }

  // Sets a second constructor for entering data
  Rectangle(double newWidth, double newHeight)
  {
    width = newWidth;
    height = newHeight;
  }


  // Accessors
  // Accesses width and returns its value
  double getWidth()
  {
    return width;
  }
  // Accesses height and returns its value
  double getHeight()
  {
    return height;
  }


  // Mutators
  // Changes width
  void setWidth(double newWidth)
  {
    width = newWidth;
  }
  // Changes height
  void setHeight(double newHeight)
  {
    height = newHeight;
  }


  // Functions
  // Returns calculation of area
  double getArea()
  {
    return (width * height);
  }
  // Returns calculation of perimeter
  double getPerimeter()
  {
    return (2*(width + height));
  }
};

// Main function
int main()
{
  // Creates objects using the class included from Rectangle.h
  Rectangle rectangle1(4, 40);
  Rectangle rectangle2(3.5,35.9);

  // Prints out header of Bonus Problem
  cout << "Computer Programming 1" << endl;
  cout << "Bonus Assignment Problem 1 - Exercise 9.1" << endl;
  cout << "Created on 10/18/18" << endl;
  cout << "by Isabela Rangel" << endl << endl;



  // Displays information on rectangle 1
  cout << "Rectangle of width " << rectangle1.width << " and height " << rectangle1.height << endl;
  // Displays information on rectangle1 acquired by the functions specified
  cout << "Has area " << rectangle1.getArea() << " and Perimeter " << rectangle1.getPerimeter() << endl;

  cout << endl;

  // Displays information on rectangle2
  cout << "Rectangle of width " << rectangle2.width << " and height " << rectangle2.height << endl;
  // Displays information on rectangle2 acquired by functions specified
  cout << "Has area " << rectangle2.getArea() << " and Perimeter " << rectangle2.getPerimeter() << endl;

  // Returns 0 to indicate main execution status
  return 0;
}
