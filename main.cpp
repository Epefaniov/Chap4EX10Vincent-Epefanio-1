/*
    Assignment: Chapter 4 Ex 15

    Programmer: Vincent Epefanio

    Date: 10/25/2024

    Reqiurements: Write a program that asks for the weight of a package and the distance it is to be shipped, and then displays the charges.

*/



#include <iostream>
#include <iomanip>

using namespace std;

double calculateShippingCharges(double weight, double distance) {
    double rate;

    
    if (weight <= 2) {
        rate = 1.10;
    } else if (weight <= 6) {
        rate = 2.20;
    } else if (weight <= 10) {
        rate = 3.70;
    } else if (weight <= 20) {
        rate = 4.80;
    } else {
        return -1; 
    }

    
    return (distance / 500) * rate;
}

int main() {
    double weight, distance;

    
    do {
        cout << "Enter the weight of the package (in kg, 0 < weight <= 20): ";
        cin >> weight;

        if (weight <= 0 || weight > 20) {
            cout << "Invalid weight! Please enter a weight between 0 and 20 kg." << endl;
        }
    } while (weight <= 0 || weight > 20);

    
    do {
        cout << "Enter the distance to be shipped (in miles, 10 <= distance <= 3000): ";
        cin >> distance;

        if (distance < 10 || distance > 3000) {
            cout << "Invalid distance! Please enter a distance between 10 and 3000 miles." << endl;
        }
    } while (distance < 10 || distance > 3000);

    
    double charges = calculateShippingCharges(weight, distance);

    
    cout << fixed << setprecision(2); 
    cout << "Shipping charges: $" << charges << endl;

    return 0;
}
