#pragma once
// Patrick Callahan
// Cis 1202
// 12/12/2021
// Final

#ifndef HOTEL_H
#define HOTEL_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class HotelClass
{
	string hotelName;
	int nights;
	double price;
	double total;

public:
	HotelClass();
	HotelClass(string H, int N, double P, double T);

	//getters
	string getName();

	int getNights();

	double getPrice();

	double getTotal();


	//setters
	void setName(string H);

	void setNights(int N);

	void setPrice(double P);

	void setTotal(double T);

	//display info
	void displayInfo();
};

#endif