// Patrick Callahan
// Cis 1202
// 12/12/2021
// Final

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Hotel.h"

using namespace std;

//blank constructor

HotelClass::HotelClass()
{
	hotelName = "Examplename";

	nights = 0;

	price = 00.00;

	total = 00.00;
}

HotelClass::HotelClass(string H, int N, double P , double T)
{
	hotelName = H;

	nights = N;

	price = P;

	total = T;

}

// name getter
string HotelClass::getName()
{
	return hotelName;
}

// type getter
int HotelClass::getNights()
{
	return nights;
}

// price getter
double HotelClass::getPrice()
{
	return price;
}

// total getter
double HotelClass::getTotal()
{
	return total;
}

// name setter
void HotelClass::setName(string H)
{
	hotelName = H;
}

// type setter
void HotelClass::setNights(int N)
{
	nights = N;
}

// price setter
void HotelClass::setPrice(double P)
{
	price = P;
}

//total setter
void HotelClass::setTotal(double T)
{
	total = T;
}


void HotelClass::displayInfo()
{
	cout << "------------------------------------------------------------------------------------------------------------------------\n";
	cout << "                                                     Visit Receipt\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n";

	cout << "Hotel Name: " << getName() << endl;

	cout << "Number of Nights: " << getNights() << endl;

	cout << fixed << setprecision(2);
	cout << "Total Price: " << getTotal() << endl;
}

