#include <iostream>
#include <string>

// Base class representing the core principles of OOP
class Vehicle {
private:
    std::string color;  // Encapsulation: Private member variable

public:
    // Constructor
    Vehicle(std::string c) : color(c) {}

    // Encapsulation: Public setter and getter methods for private member variables
    void setColor(std::string c) {
        color = c;
    }

    std::string getColor() const {
        return color;
    }

    // Polymorphism: Virtual function
    virtual void displayInfo() const {
        std::cout << "This is a vehicle of color: " << color << std::endl;
    }
};

// Derived class representing Inheritance
class Car : public Vehicle {
private:
    int doors;

public:
    // Constructor
    Car(std::string c, int d) : Vehicle(c), doors(d) {}

    void setDoors(int d) {
        doors = d;
    }

    int getDoors() const {
        return doors;
    }

    // Polymorphism: Overriding base class method
    void displayInfo() const override {
        std::cout << "This is a car of color: " << getColor() << " with " << doors << " doors." << std::endl;
    }
};

int main() {
    Vehicle v("Red");
    Car c("Blue", 4);

    v.displayInfo(); // Outputs: This is a vehicle of color: Red
    c.displayInfo(); // Outputs: This is a car of color: Blue with 4 doors.

    return 0;
}
