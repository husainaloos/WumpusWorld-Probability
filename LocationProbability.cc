#include "LocationProbability.h"

LocationProbability::LocationProbability()
{
    location = Location();
    probability = Probability();
}

LocationProbability::LocationProbability(Location loc, Probability prob)
{
    location = loc;
    probability = prob;
}

LocationProbability::~LocationProbability()
{
}
