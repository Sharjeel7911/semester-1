/*
Faizan 0485
Sharjeel 0506
Sufyan 0533
Moeez 0541
*/

#include <iostream>
using namespace std;

int main() {

    //CAR MANAGEMENT
    int regnum[5] = { 0, 0, 0, 0, 0 };
    char model1[10], model2[10], model3[10], model4[10], model5[10];
    int rent[5] = {};
    bool isavailable[5] = { false };

    //CUSTOMER MANAGEMENT
    char customer1[10], customer2[10], customer3[10], customer4[10], customer5[10];
    int contact[5] = { 0, 0, 0, 0, 0 };
    bool history[5] = { false };

    //RENTAL SYSTEM
    int duration[5] = { 0, 0, 0, 0, 0 };
    bool insurance[5] = { false };

    //REPORT GENERATION
    bool carrented[5] = { false };
    int dailyearnings = 0;


    while (true) {
        cout << "--- WELCOME ---" << endl << endl;

        cout << "1. CAR MANAGEMENT " << endl;
        cout << "2. CUSTOMER MANAGEMENT" << endl;
        cout << "3. RENTAL SYSTEM " << endl;
        cout << "4. REPORT GENERATION " << endl;
        cout << "5. EXIT " << endl;

        int choice = 0;
        cin >> choice;

        //CAR MANAGEMENT
        if (choice == 1) {
            while (true) {
                cout << "1. ADD CARS " << endl;
                cout << "2. EDIT CARS " << endl;
                cout << "3. REMOVE CARS " << endl;
                cout << "4. VIEW CARS " << endl;
                cout << "5. RETURN TO MAIN MENU" << endl;

                int carchoice = 0;
                cin >> carchoice;

                // ADD CARS
                if (carchoice == 1) {
                    for (int i = 0; i < 5; i++) {
                        if (!isavailable[i]) {
                            cout << "FOR CAR " << (i + 1) << endl;
                            cout << "Enter car registration number: ";
                            cin >> regnum[i];

                            cout << "Enter car model (max 10 chars): ";
                            if (i == 0) {
                                cin >> model1;
                            }
                            else if (i == 1) {
                                cin >> model2;
                            }
                            else if (i == 2) {
                                cin >> model3;
                            }
                            else if (i == 3) {
                                cin >> model4;
                            }
                            else if (i == 4) {
                                cin >> model5;
                            }

                            cout << "Enter rental price per day: ";
                            cin >> rent[i];

                            isavailable[i] = true;
                            cout << "Car added successfully!" << endl;
                        }
                        else {
                            cout << "Car " << (i + 1) << " is already registered!" << endl;
                        }

                        if (i < 4) {
                            cout << "Would you like to add another car? (0 = NO, 1 = YES): ";
                            int addMore;
                            cin >> addMore;
                            if (addMore == 0) {
                                break;
                            }
                        }
                    }
                }

                // Edit Cars
                else if (carchoice == 2) {
                    cout << "Enter the car number (1-5) to edit: ";
                    int editCar;
                    cin >> editCar;
                    editCar--;

                    if (editCar < 0 || editCar >= 5) {
                        cout << "Error: Invalid car number! Enter a number between 1 and 5." << endl;
                    }
                    else if (!isavailable[editCar]) {
                        cout << "Error: Car " << (editCar + 1) << " is not registered yet!" << endl;
                    }
                    else {
                        cout << "Editing Car " << (editCar + 1) << endl;
                        cout << "Enter new registration number: ";
                        cin >> regnum[editCar];

                        cout << "Enter new car model: ";
                        if (editCar == 0) {
                            cin >> model1;
                        }
                        else if (editCar == 1) {
                            cin >> model2;
                        }
                        else if (editCar == 2) {
                            cin >> model3;
                        }
                        else if (editCar == 3) {
                            cin >> model4;
                        }
                        else if (editCar == 4) {
                            cin >> model5;
                        }

                        cout << "Enter new rental price per day: ";
                        cin >> rent[editCar];

                        cout << "Car updated successfully!" << endl;
                    }
                }

                // REMOVE CARS
                else if (carchoice == 3) {
                    cout << "Enter the car number (1-5) to remove: ";
                    int remove;
                    cin >> remove;
                    remove--;

                    if (remove >= 0 && remove < 5 && isavailable[remove]) {
                        isavailable[remove] = false;
                        regnum[remove] = 0;
                        rent[remove] = 0;

                        if (remove == 0) {
                            for (int j = 0; j < 10; j++) {
                                model1[j] = '\0';
                            }
                        }
                        else if (remove == 1) {
                            for (int j = 0; j < 10; j++) {
                                model2[j] = '\0';
                            }
                        }
                        else if (remove == 2) {
                            for (int j = 0; j < 10; j++) {
                                model3[j] = '\0';
                            }
                        }
                        else if (remove == 3) {
                            for (int j = 0; j < 10; j++) {
                                model4[j] = '\0';
                            }
                        }
                        else if (remove == 4) {
                            for (int j = 0; j < 10; j++) {
                                model5[j] = '\0';
                            }
                        }

                        cout << "Car removed successfully!" << endl;
                    }

                    else {
                        cout << "Invalid car number or car not registered!" << endl;
                    }
                }

                // VIEW CARS
                else if (carchoice == 4) {
                    cout << "REGISTERED CARS" << endl;
                    for (int i = 0; i < 5; i++) {
                        if (isavailable[i]) {
                            cout << "Car " << (i + 1) << ":" << endl;
                            cout << "Registration Number: " << regnum[i] << endl;

                            cout << "Model: ";

                            if (i == 0) {
                                cout << model1;
                            }
                            else if (i == 1) {
                                cout << model2;
                            }
                            else if (i == 2) {
                                cout << model3;
                            }
                            else if (i == 3) {
                                cout << model4;
                            }
                            else if (i == 4) {
                                cout << model5;
                            }
                            cout << endl;
                            cout << "Rental Price: Rs. " << rent[i] << "/day" << endl;
                        }
                    }
                }

                // RETURN TO MAIN MENU
                else if (carchoice == 5) {
                    break;
                }
            }
        }

        // CUSTOMER MANAGEMENT
        else if (choice == 2) {
            while (true) {
                cout << "1. ADD CUSTOMER " << endl;
                cout << "2. EDIT CUSTOMER " << endl;
                cout << "3. VIEW CUSTOMER " << endl;
                cout << "4. RETURN TO MAIN MENU" << endl;

                int customerchoice = 0;
                cin >> customerchoice;

                // ADD CUSTOMER
                if (customerchoice == 1) {
                    for (int i = 0; i < 5; i++) {
                        if (contact[i] == 0) {
                            cout << "Enter customer name: ";
                            if (i == 0) {
                                cin >> customer1;
                            }
                            else if (i == 1) {
                                cin >> customer2;
                            }
                            else if (i == 2) {
                                cin >> customer3;
                            }
                            else if (i == 3) {
                                cin >> customer4;
                            }
                            else if (i == 4) {
                                cin >> customer5;
                            }

                            cout << "Enter customer contact number: ";
                            cin >> contact[i];

                            cout << "Has this customer rented a car before? (0 = No, 1 = Yes): ";
                            cin >> history[i];

                            cout << "Customer added successfully!" << endl;

                            if (i < 4) {
                                cout << "Would you like to add another customer? (0 = NO, 1 = YES): ";
                                int add;
                                cin >> add;
                                if (add == 0) {
                                    break;
                                }
                            }

                        }
                    }
                }

                // EDIT CUSTOMER
                else if (customerchoice == 2) {
                    cout << "Enter customer number (1-5) to edit: ";
                    int editCustomer;
                    cin >> editCustomer;
                    editCustomer--;

                    if (editCustomer >= 0 && editCustomer < 5 && contact[editCustomer] != 0) {
                        cout << "Editing customer " << (editCustomer + 1) << ":" << endl;
                        cout << "Enter new name: ";
                        if (editCustomer == 0) {
                            cin >> customer1;
                        }
                        else if (editCustomer == 1) {
                            cin >> customer2;
                        }
                        else if (editCustomer == 2) {
                            cin >> customer3;
                        }
                        else if (editCustomer == 3) {
                            cin >> customer4;
                        }
                        else if (editCustomer == 4) {
                            cin >> customer5;
                        }

                        cout << "Enter new contact number: ";
                        cin >> contact[editCustomer];

                        cout << "Has this customer rented a car before? (0 = No, 1 = Yes): ";
                        cin >> history[editCustomer];

                        cout << "Customer updated successfully!" << endl;
                    }
                    else {
                        cout << "Error: Invalid customer number or no customer found!" << endl;
                    }
                }

                // VIEW CUSTOMER
                else if (customerchoice == 3) {
                    cout << "Customer Details: " << endl;
                    for (int i = 0; i < 5; i++) {
                        if (contact[i] != 0) {
                            cout << "Customer " << (i + 1) << ": " << endl;
                            cout << "Name: ";
                            if (i == 0) {
                                cout << customer1;
                            }
                            else if (i == 1) {
                                cout << customer2;
                            }
                            else if (i == 2) {
                                cout << customer3;
                            }
                            else if (i == 3) {
                                cout << customer4;
                            }
                            else if (i == 4) {
                                cout << customer5;
                            }
                            cout << endl;

                            cout << "Contact Number: " << contact[i] << endl;

                            if (history[i]) {
                                cout << "Rental History: Rented before" << endl;
                            }
                            else {
                                cout << "Rental History: No rental history" << endl;
                            }
                        }
                    }
                }

                // RETURN TO MAIN MENU
                else if (customerchoice == 4) {
                    break;
                }
            }
        }

        // RENTAL SYSTEM
        else if (choice == 3) {
            while (true) {
                cout << "1. RENT A CAR" << endl;
                cout << "2. RETURN TO MAIN MENU" << endl;

                int rentalChoice = 0;
                cin >> rentalChoice;

                // RENT A CAR
                if (rentalChoice == 1) {
                    cout << "Available Cars: " << endl;
                    for (int i = 0; i < 5; i++) {
                        if (isavailable[i]) {
                            cout << "Car " << (i + 1) << ":" << endl;
                            cout << "Registration Number: " << regnum[i] << endl;
                            cout << "Model: ";
                            if (i == 0) {
                                cout << model1;
                            }
                            else if (i == 1) {
                                cout << model2;
                            }
                            else if (i == 2) {
                                cout << model3;
                            }
                            else if (i == 3) {
                                cout << model4;
                            }
                            else if (i == 4) {
                                cout << model5;
                            }
                            cout << endl;
                            cout << "Rental Price: Rs. " << rent[i] << "/day" << endl;
                        }
                    }

                    cout << "Select a car (1-5): " << endl;
                    int carChoice = 0;
                    cin >> carChoice;
                    carChoice--;

                    if (carChoice < 0 || carChoice >= 5 || !isavailable[carChoice]) {
                        cout << "Error: Invalid car selection or car not available!" << endl;
                    }
                    else {
                        cout << "Enter rental duration (in days): ";
                        cin >> duration[carChoice];

                        cout << "Do you want insurance? (0 = No, 1 = Yes): ";
                        cin >> insurance[carChoice];

                        float totalCost = rent[carChoice] * duration[carChoice];

                        if (duration[carChoice] > 7) {
                            float discount = totalCost * 0.10;
                            totalCost -= discount;
                            cout << "A 10% discount has been applied for rentals over 7 days!" << endl;
                        }

                        if (insurance[carChoice]) {
                            totalCost += 100;  // Insurance costs 100 (fixed)
                            cout << "Insurance cost of 100 has been added." << endl;
                        }

                        cout << "Total rental cost: Rs. " << totalCost << endl;

                        dailyearnings += totalCost;
                        carrented[carChoice] = true;
                        isavailable[carChoice] = false;
                    }
                }

                // RETURN TO MAIN MENU
                else if (rentalChoice == 2) {
                    break;
                }
            }
        }

        // REPORT GENERATION
        else if (choice == 4) {
            cout << "--- REPORT ---" << endl;
            cout << "Total earnings for the day: Rs. " << dailyearnings << endl;
            cout << "Currently rented cars: " << endl;

            bool rentedfound = false;
            for (int i = 0; i < 5; i++) {
                if (carrented[i]) {
                    rentedfound = true;
                    cout << "Car " << (i + 1) << " (Model no. " << regnum[i] << ")" << endl;
                }
            }
            if (!rentedfound) {
                cout << "No cars are currently rented." << endl;
            }
        }

        // EXIT
        else if (choice == 5) {
            break;
        }
    }
    return 0;
}