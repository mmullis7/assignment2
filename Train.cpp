//Myra Mullis
//Train.cpp

#include "Train.h"

Train::Train(string brand, string model, string fuelType, int numCars)
{
        setBrand(brand);
        setModel(model);
        setFuelType(fuelType);
        setNumCars(numCars);
        srand( time(0) );                       //seed the random number generator(SOURCE: Bob Myers COP3330 website)
}

Train::~Train() = default;

int Train::getNumCars()
{
        return numOfCars;
}

void Train::setNumCars(int numCars)
{
        numOfCars = numCars;
}

double Train::mileageEstimate(double time)      //random number between 2 and 10 miles per minute
{                                               //if train less than 7 cars, boost mileage by 8.7% per car
        int r;
        r = rand() % (10 - 2) + 2;              //random number between 2 and 10(SOURCE: same as in Jet.cpp)
        double mileage = time * r;
        if (numOfCars < 7)
                mileage += (mileage * 0.87 * numOfCars);
        return mileage;
}

string Train::toString()
{
        return "-> Train\n" + PoweredVehicle::toString() + "\n\tNumber of Cars: " + to_string(getNumCars());
}
