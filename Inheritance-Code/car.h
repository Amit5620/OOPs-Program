#include"vehicle.h"
using namespace std;
class car:public vehicle
{
	char model[15];
	char color[15];
	int price;	
	int engine;
	public:
		void set_car_model()
		{
			cout<<"\nEnter Car Model:";
			gets(model);
		}
		char* get_model()
		{
			return model;
		}
		void set_engine()
		{
			cout<<"\nEnter engine capacity(cc):";
			cin>>engine;
		}
		int get_engine()
		{
			return engine;
		}
		void set_color()
		{
			cout<<"\nEnter Color:";
			gets(color);
		}
		char* get_color()
		{
			return color;
		}
		void set_price()
		{
			cout<<"\nEnter Price(in lakhs):";
			cin>>price;
		}
		int get_price()
		{
			return price;
		}
		void display()
		{
			cout<<"\nModel:"<<get_model()<<"\nEngine Capacity(cc):"<<get_engine()<<"\nPrice(in lakhs):"<<get_price();
			cout<<"\nMileage(kmpl):"<<get_mileage()<<"\nColor:"<<get_color()<<"\nSeats:"<<get_seats();
		}
};
