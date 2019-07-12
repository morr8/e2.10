/*
 •• E2.10
 Write a program that asks the user to input
 
 •The number of gallons of gas in the tank
 •The fuel efficiency in miles per gallon
 •The price of gas per gallon
 Then print the cost per 100 miles and how far the car can go with the gas in the tank.
 */

#include <iostream>

using namespace std;

int main()
{
    cout << "How many gallons of gas is in your tank? ";
    float tank_gallons;
    cin >> tank_gallons;
    
    cout << "How many miles per gallon do you get? ";
    float mpg;
    cin >> mpg;
    
    cout << "How much do you pay per gallon at the gas station? ";
    float price;
    cin >> price;
    
    cout << "For a 100 mile drive you will spend approximately $" << (100 / mpg) * price << endl;
    cout << "With " << tank_gallons << " gallons, your vehicle can go " << (tank_gallons * mpg) << " miles." << endl;
    
    
}
