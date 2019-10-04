//Myra Mullis
//Skateboard.cpp

#include <cstdlib>
#include <ctime>
#include <cmath>                        //for the floor function
#include "Skateboard.h"

Skateboard::Skateboard(string brand, string model)
{
        setBrand(brand);
        setModel(model);
        srand( time(0) );               //seed the random number generator(SOURCE: Bob Myers COP3330 website)
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time)
{
	double r;
        r = rand() % (500000 - 100000) + 100000;//random number between 100000 and 500000(SOURCE: modidied the Jet.cpp random num for ints
        //making 0.1 and 0.5 this large by moving the decimal allows for more precision in next step after dividing to get correct range
        r = r / 1000000;                        //if number was 300000, then divide by 1000000, to get 0.3, which is in correct range
        double mileage = time * r;
        if (time > 25 && time < 250)
        {
                double thirdOfTime = time / 3;
                int newTime = floor(thirdOfTime);
                int r = rand() % (newTime - 1) + 1;
                mileage = mileage + r;          //add random mileage between 1 and third of time's value
        }
        return mileage;        
}

string Skateboard::toString()
{
        return "-> Skateboard\n" + Vehicle::toString();
}
