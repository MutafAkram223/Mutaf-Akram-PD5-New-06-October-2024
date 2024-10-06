#include <iostream>
using namespace std;
float taxCalculator(char type, float price);

main() {
char vehicleType;
float price;

cout << "Enter vehicle type (M for Motorcycle, C for Car, T for Truck, B for Bus): ";
cin >> vehicleType;
cout << "Enter the price of vehicle (in dollars): ";
cin >> price;

float finalPrice = taxCalculator(vehicleType, price);
cout << "The final price on a vehicle of type " << vehicleType << " is " << finalPrice << " dollars" << endl;

return 0;
}

float taxCalculator(char type, float price) {
float taxRate = 0;
if (type == 'M') {
taxRate = 0.06;
}
if (type == 'C') {
taxRate = 0.08;
}
if (type == 'T') {
taxRate = 0.10;
}
if (type == 'B') {
taxRate = 0.12;
}
float taxAmount = price * taxRate;
float finalPrice = price + taxAmount;
return finalPrice;
}
