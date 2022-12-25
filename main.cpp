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

    int inventory_nb;
    int* inventory  ;
    int inventory_max;

    cout << "Please enter the max amount of appliances your store can contain: " << endl;
    cin >> inventory_max;
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
    int menu_cnt = 0;
    int pw_count = 0;

    switch (menu_option())
    {
    case 1:

        cout << "Please enter your password: " << endl;
        cin >> employee_pw;
        if (employee_pw != password) {
            for (int i = 0; i < 4; i++) {
                do {
                    menu_cnt++;
                    pw_count++;
                    cout << "Please enter your password: " << endl;
                    cin >> employee_pw;
                    if (employee_pw == password) {
                        cout << "Please enter the max amount of appliances you want to add to the inventory array: " << endl;
                        cin >> inventory_nb;
                        if (inventory_max <= inventory_nb) {
                            inventory = new int[inventory_nb];
                        }
                        inventory = new int[inventory_nb];
                    }
                } while (employee_pw != password && menu_cnt < 3);
                if (menu_cnt % 3 == 0 && pw_count != 12) {
                    menu_option();
                }
                
                menu_cnt = 0;
                cout << "Program detected suspicious activities and will terminate immediately!" << endl;

            }
        }
        else if (employee_pw == password) {
            cout << "Please enter the max amount of appliances your store can contain: " << endl;
            cin >> inventory_nb;
            inventory = new int[inventory_nb];
        }
        break;
    default:
        break;
    }


    return 0;


} 