class Probability
{
public:
    Probability();
    Probability(float pitProbability, float wumpusProbability, float goldProbability);
    Probability& operator= (const Probability& prob);
    ~Probability();
    float pit;
    float wumpus;
    float gold;
};
