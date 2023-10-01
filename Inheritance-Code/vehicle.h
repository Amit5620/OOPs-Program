using namespace std;
class vehicle{
	char type[15];
	int mileage;
	int seats;
	int wheels;
	public:
		vehicle()
		{
			mileage=0;
			seats=0;
			wheels=0;
		}
		void vehicle_type()
		{
			cout<<"\nEnter type of vehicle:";
			gets(type);
		}
		char* get_type()
		{
			return type;
		}
		void set_mileage()
		{
			cout<<"\nEnter mileage(kmpl):";
			cin>>mileage;
		}
		int get_mileage()
		{
			return mileage;
		}
		void set_seats(int s)
		{
			seats=s;
		}
		int get_seats()
		{
			return seats;
		}
		void set_wheels(int w)
		{
			wheels=w;
		}
		int get_wheels()
		{
			return wheels;
		}
};

