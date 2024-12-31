#include <iostream>
#include <string>
using namespace std;

struct Car {
    string model;
    string name;
    string color;m
    double perDayRent;
};

void displayCarDetails(Car car) {
    cout << "\nCar Details:" << endl;
    cout << "Model: " << car.model << endl;
    cout << "Name: " << car.name << endl;
    cout << "Color: " << car.color << endl;
    cout << "Per Day Rent: Rs." << car.perDayRent << endl;
}

int main() {
    int totalCars = 23;

    Car cars[totalCars] = {
        {"2023", "Toyota Corolla (Grande)", "Red", 6500},
        {"2022", "Honda Civic", "Blue", 8000},
        {"2021", "Ford Mustang", "Black", 21000},
        {"2019", "Suzuki Wagon R", "White", 4500},
	  	{"2019", "Toyota Land Cruiser", "White", 15000},
        {"2021", "BMW 5-Series", "White", 27000},
        {"2021", "BMW 5-Series", "White", 21000},
        {"2021", "Mercedes-Benz S-Class", "White", 27500},
        {"2019", "Honda Civic", "White", 7000},
        {"2023", "Mercedes-Benz C-Class", "Black", 15000},
        {"2017", "Honda City", "Grey", 5000},
        {"2019", "Suzuki Mehran", "White", 2500},
        {"2018", "Suzuki Swift", "Grey", 3500},
        {"2019", "Suzuki Alto", "Grey", 3500},
   	   {"2017", "Honda HRV", "Grey", 5500},
        {"2017", "Honda BRV", "Grey", 5000},
        {"2017", "Honda Civic", "Grey", 5000},
        {"2013", "Toyota Corolla (XLI)", "Black", 4500},
        {"2013", "Toyota Corolla (GLI)", "White", 4500},
        {"2023", "Hawal H5", "Dark Green", 8500},
        {"2023", "Audi A5", "Black", 10500},
        {"2019", "Toyota crown", "White", 11000},
        {"2019", "Lexus LC500", "White", 16000},
           
    };

    cout << "--*-*-*-*-*-*-*-WELCOME TO CAR RENT SERVICES*-*-*-*-*-*-*-*-*-";
    cout << endl << "-*-*-*-*-*-*-*-*-       Available Cars       -*-*-*-*-*-*-*-*-" << endl;
    cout << "_____________________________________________________________\n";
    
    for (int i = 0; i < totalCars; ++i) {
        cout << endl << "*_*_*_Car" << ":"<< i + 1  << "*_*_*_ ";
        displayCarDetails(cars[i]);
    }

    double totalCost = 0;
    char continueRenting;
string phoneNumber;
string cnicNumber;

cout << "Please enter your phone number: ";
cin >> phoneNumber;

cout << "Please enter your CNIC number: ";
cin >> cnicNumber;
    do {
        int carIndex;
        int rentalDays;

        cout << "\nEnter the number of the car you want to rent (1-" << totalCars << "): ";
        cin >> carIndex;

        if (carIndex < 1 || carIndex > totalCars) {
            cout << "Invalid car selection." << endl;
            continue;
        }

        cout << "Enter the number of days you want to rent: ";
        cin >> rentalDays;

        double cost = cars[carIndex - 1].perDayRent * rentalDays;
        totalCost += cost;

        cout << "\nYou have rented the following car:" << endl;
        displayCarDetails(cars[carIndex - 1]);
        cout << "Cost for " << rentalDays << " days: Rs." << cost << endl;

        cout << "\nDo you want to rent another car? (y/n): ";
        cin >> continueRenting;

    } while (continueRenting == 'y' || continueRenting == 'Y');

    cout << "\nTotal Cost for all rented cars: Rs." << totalCost << endl;
    cout << "Thank you for using our car rental service!" << endl;

    return 0;
}

