/*
Programming Bonus assignment 1 part 2
Isabela Rangel
10/18/18
*/
#include <iostream>
using namespace std;

// Creates the class
class Fan
{
public:
  // Data Field
  int speed;
  bool on;
  double radius;

  // Constructors
  // Constructs a default fan object when no arguments are used
  Fan()
  {
    speed = 1;
    on = false;
    radius = 5;
  }

  // Sets a second constructor for entering data
  Fan(int newSpeed, double newRadius)
  {
    on = true;
    speed = newSpeed;
    radius = newRadius;
  }


  // Accessors
  // Accesses speed and returns its value
  int getSpeed()
  {
    return speed;
  }
  // Accesses radius and returns its value
  double getRadius()
  {
    return radius;
  }
  // Returns status of the fan in a human readable format
  string getOn()
  {
    if(on)
      return string("on");
    else
      return string("off");
  }


  // Mutators
  // Changes speed
  void setSpeed(double newSpeed)
  {
    speed = newSpeed;
  }
  // Changes radius
  void setRadius(double newRadius)
  {
    radius = newRadius;
  }
  // Turns fan off
  void turnOff()
  {
    on = false;
  }
  // Turns fan on
  void turnOn()
  {
    on = true;
  }

};

// Main function
int main()
{
  // Creates objects using the class included from Rectangle.h
  Fan fan1(3, 10);
  Fan fan2(2, 5);
  fan2.turnOff();

  // Prints out header of Bonus Problem
  cout << "Computer Programming 1" << endl;
  cout << "Bonus Assignment Problem 2 - Exercise 9.2" << endl;
  cout << "Created on 10/18/18" << endl;
  cout << "by Isabela Rangel" << endl << endl;



  // Displays information on fan 1
  cout << "Fan of speed " << fan1.getSpeed() << " and radius " << fan1.getRadius() << " is turned " << fan1.getOn() << endl << endl;

  // Displays information on fan 2
  cout << "Fan of speed " << fan2.getSpeed() << " and radius " << fan2.getRadius() << " is turned " << fan2.getOn() ;

  cout << endl;

  // Returns 0 to indicate main execution status
  return 0;
}
