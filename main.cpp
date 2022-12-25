#include <iostream>
#include <stdlib.h>
#include "Appliance.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    Appliance* a = new Appliance("fridge,", "LG", 2);
    Appliance* a2 = new Appliance();
    Appliance* a4 = new Appliance();

    /*Appliance a3;
    string appliance_type;
    string appliance_model;
    double appliance_price;

    cout << "please enter the type of appliance " << endl;
    cin >> appliance_type;
    cout << "please enter the type of model " << endl;
    cin >> appliance_model;

    cout << "please enter the price" << endl;
    do {
        cout << "the price should be greater than 0" << endl;
        cin >> appliance_price;

    } while (appliance_price < 1);

    a3.setType(appliance_type);
    a3.setBrand(appliance_model);

        a3.setPrice(appliance_price);

    cout << *a << endl;
    cout << *a2 << endl;
    cout << *a3 << endl;
   cout<< findNumberOfCreatedAppliances() <<endl;
   cout << (*a4 == *a2) << endl;*/
    cout << "====Appliance Tracker===" << endl;
    cout << "Please enter the max amount of appliances your store can contain: " << endl;
    int inventory_nb;
    cin >> inventory_nb;
    int* inventory = new int[inventory_nb];


    /*int option_nb;
    do {
        cout << "What do you want to do? " << endl;
        cout << "\t 1. Enter new appliances (password required) " << endl;
        cout << "\t 2. Change information of an appliance (password required) " << endl;
        cout << "\t 3. Display all appliances by a specific brand " << endl;
        cout << "\t 4. Display all appliances under a certain price. " << endl;
        cout << "\t 5. Quit" << endl;
        cout << "Please enter your choice >" << endl;
        cin >> option_nb;
    } while (option_nb < 1 || option_nb > 5);*/

    const string password = "c249";
    string employee_pw;
    int pw_count=0;
    int menu_count = 0;

      switch (menu_option())
      {
      case 1:
          for (int i = 0; i < 4; i++) {
              do {
                  pw_count++;
                  menu_count++;
                  cout << "Please enter your password: " << endl;
                  cin >> employee_pw;
              } while (employee_pw != password && pw_count < 3);
              if (pw_count % 3 == 0 && menu_count != 12) {
                  menu_option();
              }
              else if (employee_pw == password) {
                  i = 0;
              }
              pw_count = 0;

          }
          cout << "Program detected suspicious activities and will terminate immediately!" << endl;
          break;
      default:
          break;
      }


      return 0;

   
}