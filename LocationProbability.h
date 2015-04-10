#include "Probability.h"
#include "Location.h"

class LocationProbability
{
public:
    LocationProbability();
    LocationProbability(Location loc, Probability prop);
    ~LocationProbability();
    
    Location location;
    Probability probability;
};
