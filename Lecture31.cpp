#include <iostream>
using namespace std;
// The vehicle is a base class

class Vehicle
{
public:
    int number_tyers;
    string name;
    int capacity;
    int milegage;

public:
    void calculatemilegage()
    {
        cout << "The milegage is " << milegage;
    }
};

// Now I will inherit the feature of the base class into derived class

class SchoolBus : public Vehicle
{

    string school_name;

    int number_holidays;

public:
    void printnameofschool()
    {
        cout << "The name of the school  is " << name;
    }
};

class Car : public Vehicle
{

    // No member named milage
    // No member function named calculatemilage
private:
    int number_airbags;
    int ac_consumption;
};

int main()
{
    Car a;
    a.milegage = 50;
    a.calculatemilegage();
}