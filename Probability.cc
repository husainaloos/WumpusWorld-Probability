#include "Probability.h"

Probability::Probability()
{
    pit = wumpus = gold = 0;
}

Probability::Probability(float p, float w, float g)
    : pit(p), wumpus(w), gold(g)
{
}

Probability& Probability::operator=(const Probability& prob)
{
    pit = prob.pit;
    wumpus = prob.wumpus;
    gold = prob.gold;
}

Probability::~Probability()
{
}
