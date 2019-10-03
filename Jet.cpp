//Myra Mullis
//Jet.cpp

#include <cstdlib>
#include <ctime>
#include "Jet.h"

Jet::Jet(string brand, string model, string fuelType, int numEng)
{
	setBrand(brand);
	setModel(model);
	setFuelType(fuelType);
	setNumEngines(numEng);
	srand( time(0) );		//seed the random number generator(SOURCE: Bob Myers COP3330 website)
}

Jet::~Jet() = default;

int Jet::getNumEngines()
{
	return numberOfEngines;	
}

void Jet::setNumEngines(int numEng)
{
	numberOfEngines = numEng;
}

double Jet::mileageEstimate(double time)
{
	int r;
	r = rand() % (100 - 40) + 40;	//random number between 40 and 100(SOURCE: https://www.dreamincode.net/forums/topic/65642-random-number-between-2-ints/)
	double mileage = time * r; 
	if (numberOfEngines > 2 && fuelType == "Rocket")
		mileage += (mileage * 0.55 * numberOfEngines);
	return mileage;
}

string Jet::toString()
{
	return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " + to_string(getNumEngines());
}


