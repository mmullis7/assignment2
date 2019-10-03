//Myra Mullis
//Skateboard.h

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle
{       //inherits from Vehicle
        public:
                explicit Skateboard(string brand, string model);
                virtual ~Skateboard();
                virtual double mileageEstimate(double time);
                virtual string toString();
};

#endif //DRIVINGSIMULATOR_SKATEBOARD_H