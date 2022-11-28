#include <iostream>
#include <string>
#include "Appliance.h"
using namespace std;



long Appliance::snCounter = 100000;
int Appliance::counter = 0;
Appliance::Appliance():  type("Fridge"), brand("LG"),  price(4999.99)
{
   //default initialized constructor
    SiN = snCounter+1;
    counter++;

}

Appliance::Appliance(string type, string brand,  double price) {
    this->type = type;
    this->brand = brand;

        if (price > 1) {
            this->price = price;
        }
        else {
         //   "Price cannot be less than $1 "; 
        }
   
   
    SiN = snCounter+1;
    counter++;

   // SN = serialNb++;
}
Appliance::~Appliance()
{
}
void Appliance::setType(string type)
{
    this->type = type;
}
string Appliance::getType()
{
    return this->type;
}
const string& Appliance::getBrand() const
{
    return this->brand;
}
void Appliance::setBrand(const string& brand)
{
    this->brand = brand;
}
double Appliance::getPrice() const
{
    return this->price;
}
void Appliance::setPrice(double price)
{
    this->price = price;
}
int Appliance::getCounter() {
    return this->counter;
}
ostream& operator<<(ostream& display, const Appliance& a) {
    return display << "The appliance info is: Type- " << a.type << " brand- " << a.brand
        << "price- " << a.price << " serial nb- " << a.snCounter << endl;
}
//To print total number of appliance objects
int findNumberOfCreatedAppliances() {
   cout << " The number of objects created is: " << endl;
   return  Appliance::counter;//since counter is a member of appliance
}