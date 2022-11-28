#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
class Appliance {
public:
    Appliance();
    Appliance(string type, string brand, double price);
   
    
    ~Appliance();
    void setType(string type);
    string getType();
    const string& getBrand() const;
    void setBrand(const string& brand);
    double getPrice() const;
    void setPrice(double price);
   /* static long getSin();
    static void setSin(long sn);*/
    friend ostream& operator<<(ostream&, const Appliance& a);
    int getCounter();
    static int counter;

private:
    long SiN;
    double price;
   // static long SN;
   // long serialNb = 1000000;
    string type;
    string brand;
    static long snCounter;
};


int findNumberOfCreatedAppliances();

;

