#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

float Volume(float length, float height, float width, string unit);

int main()
{
float length, height, width;
string unit;

cout << "Enter length of pyramid (in meters): ";
cin >> length;
cout << "Enter width of pyramid (in meters): ";
cin >> width;
cout << "Enter height of pyramid (in meters): ";
cin >> height;
cout << "Enter the units (millimeters, centimeters, meters, kilometers): ";
cin >> unit;

Volume(length, height, width, unit);

return 0;
}

float Volume(float length, float height, float width, string unit)
{
float volume = (length * width * height) / 3;

if (unit == "millimeters")
cout << "Volume of Pyramid is: " << fixed << setprecision(6) << volume * 1000000000 << " Cubic Millimeters" << endl;
if (unit == "centimeters")
cout << "Volume of Pyramid is: " << fixed << setprecision(6) << volume * 1000000 << " Cubic Centimeters" << endl;
if (unit == "meters")
cout << "Volume of Pyramid is: " << fixed << setprecision(6) << volume << " Cubic Meters" << endl;
if (unit == "kilometers")
cout << "Volume of Pyramid is: " << fixed << setprecision(6) << volume / 1000000000 << " Cubic Kilometers" << endl;

return volume;
}

