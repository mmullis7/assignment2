//Myra Mullis
//Jet.h

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle
{
	private:
		int numberOfEngines;

	public:	
		explicit Jet(string brand, string model, string fuelType, int numEng=1);
		virtual ~Jet();
		int getNumEngines();
    		void setNumEngines(int numEng);
    		virtual double mileageEstimate(double time);
    		virtual string toString();
};

#endif //DRIVINGSIMULATOR_JET_H
