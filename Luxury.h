#pragma once
// Patrick Callahan
// Cis 1202
// 12/12/2021
// Final

#ifndef LUXURY_H
#define LUXURY_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Hotel.h"

using namespace std;

class Luxury : public HotelClass
{
	int numBeds;

public:
	Luxury();

	Luxury(string H, int N, double P, double T, int B);

	int getBeds();

	void setBeds(int B);

	void displayInfo();
};
#endif