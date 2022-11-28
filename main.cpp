#include <iostream>
#include <stdlib.h>
#include "Appliance.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Appliance* a = new Appliance("fridge,", "LG", 0);
    Appliance* a2 = new Appliance();

    cout << *a << endl;
    cout << *a2 << endl;
   cout<< findNumberOfCreatedAppliances();
        return 0;

}
