//Myra Mullis
//Train.h

#ifndef DRIVINGSIMULATOR_TRAIN_H
#define DRIVINGSIMULATOR_TRAIN_H

#include "PoweredVehicle.h"

class Train : public PoweredVehicle
{
        private:
                int numOfCars;          //number of cars the train has
        public:
                explicit Train(string brand, string model, string fuelType, int numCars=7);     //default = 7 cars
                virtual ~Train();
                int getNumCars();
                void setNumCars(int numCars);
                virtual double mileageEstimate(double time);
                virtual string toString();
};

#endif //DRIVINGSIMULATOR_TRAIN_H
