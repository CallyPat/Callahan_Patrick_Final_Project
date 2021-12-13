// Patrick Callahan
// Cis 1202
// 12/12/2021
// Final

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include "Hotel.h"
#include "Luxury.h"

using namespace std;

// blank constructor
Luxury::Luxury() : HotelClass()
{
	numBeds = 0;
}


Luxury::Luxury(string H, int N, double P, double T, int B) : HotelClass(H, N, P ,T)
{
	numBeds = B;
}
//door getter
int Luxury::getBeds()
{
	return numBeds;
}

//door setter
void Luxury::setBeds(int B)
{
	numBeds = B;
}

void Luxury::displayInfo()
{
	HotelClass::displayInfo();

	cout << "Beds: " << getBeds() << endl;
}
