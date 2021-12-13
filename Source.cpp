// Patrick Callahan
// Cis 1202
// 12/12/2021
// Final

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include "Hotel.h"
#include "Luxury.h"

using namespace std;

int main() {
	string H;//hotel name
	int N;//number of nights
	double P;//price
	double T;//total price

	//luxury variable
	int B;//number of beds

	//motel variable
	char D;//discount



	cout << "\t\t\t\t\t\t   Enter Hotel Info" << endl;
	cout << "Enter Hotel Name: ";
	getline(cin, H);

	cout << "Enter Number of Nights: ";
	cin >> N;

	cout << "Enter Price: ";
	cin >> P;
	cout << endl;

	T = N * P;

	HotelClass hotelclass(H, N, P, T);
	
	hotelclass.displayInfo();

	//binary

	fstream dataFile;
	dataFile.open("data.txt", ios::in | ios::out | ios::binary | ios::trunc);
	dataFile.write(reinterpret_cast<char*>(&H), sizeof(H));
	dataFile.write(reinterpret_cast<char*>(&N), sizeof(N));
	dataFile.write(reinterpret_cast<char*>(&P), sizeof(P));
	dataFile.write(reinterpret_cast<char*>(&T), sizeof(T));


	dataFile.close();

	//luxury hotel section
	cout << endl;
	cin.ignore();
	cout << "------------------------------------------------------------------------------------------------------------------------\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\t\t\t\t\t\tEnter Luxury Hotel Info" << endl;
	cout << "Enter Hotel Name: ";
	getline(cin, H);

	cout << "Enter Number of Nights: ";
	cin >> N;

	cout << "Enter Price: ";
	cin >> P;

	cout << "Enter Number of Beds: ";
	cin >> B;
	cout << endl;
	while (B > 4 || B < 1)
	{
		cout << "Error. Please Enter a number 1-4:";
		cin >> B;
	}

	T = N * P;

	Luxury luxclass(H, N, P, T, B);

	luxclass.displayInfo();

	//binary

	fstream dataFile2;
	dataFile2.open("data2.txt", ios::in | ios::out | ios::binary | ios::trunc);
	dataFile2.write(reinterpret_cast<char*>(&H), sizeof(H));
	dataFile2.write(reinterpret_cast<char*>(&N), sizeof(N));
	dataFile2.write(reinterpret_cast<char*>(&P), sizeof(P));
	dataFile2.write(reinterpret_cast<char*>(&T), sizeof(T));


	dataFile2.close();
	//motel section
	cout << endl;
	cin.ignore();
	cout << "------------------------------------------------------------------------------------------------------------------------\n";
	cout << "------------------------------------------------------------------------------------------------------------------------\n";
	cout << "\t\t\t\t\t\t   Enter Motel Info" << endl;
	cout << "Enter Motel Name: ";
	getline(cin, H);

	cout << "Enter Number of Nights: ";
	cin >> N;

	cout << "Enter Price: ";
	cin >> P;

	cout << "Do you receive an Extended stay discount?(Enter Y for yes or N for No): ";
	cin >> D;
	cout << endl;
	while (D != 'Y' && D != 'y' && D != 'N' && D != 'n'  )
	{
		cout << "Error. Enter Y or N:";
		cin >> D;
	}

	T = N * P;
	
	if (D == 'Y' || D == 'y') {
		double discountAmt;
		discountAmt = T * 0.25;
		cout << "Discounted amount is:" << discountAmt << endl;
		T = T - discountAmt;
	}

	HotelClass motel(H, N, P, T);

	motel.displayInfo();
	
	//binary

	fstream dataFile3;
	dataFile3.open("data3.txt", ios::in | ios::out | ios::binary | ios::trunc);
	dataFile3.write(reinterpret_cast<char*>(&H), sizeof(H));
	dataFile3.write(reinterpret_cast<char*>(&N), sizeof(N));
	dataFile3.write(reinterpret_cast<char*>(&P), sizeof(P));
	dataFile3.write(reinterpret_cast<char*>(&T), sizeof(T));
	

	dataFile3.close();

	system("pause");
	return 0;
}

