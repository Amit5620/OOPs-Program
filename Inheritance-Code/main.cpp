#include <iostream>
#include <string.h>
#include "car.h"
using namespace std;

int main(int argc, char **argv)
{
	car c;
	c.vehicle_type();
	cout << c.get_type();
	c.set_car_model();
	c.set_engine();
	c.set_price();
	c.set_mileage();
	c.set_seats(5);
	c.set_color();
	c.display();
	return 0;
}

/*   Conclusion: here derived subclass is public ,therefore public members of vehicle class are accessible
 to car class and private members of vehicle class are not accessible in derived class.
  when we create derived class object i.e car class object , base class i.e vehicle class constructor
  gets executed               */
