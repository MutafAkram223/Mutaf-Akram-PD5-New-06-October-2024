#include <iostream>
#include <cmath>
using namespace std;

string projectTimeCalculation(int neededHours, int daysAvailable, int numberOfWorkers);

int main() {
int neededHours, daysAvailable, numberOfWorkers;
cout << "Enter the needed hours: ";
cin >> neededHours;
cout << "Enter the available days: ";
cin >> daysAvailable;
cout << "Enter the number of workers: ";
cin >> numberOfWorkers;

string result = projectTimeCalculation(neededHours, daysAvailable, numberOfWorkers);
cout << result << endl;

return 0;
}

string projectTimeCalculation(int neededHours, int daysAvailable, int numberOfWorkers) 
{
float effectiveDays = daysAvailable * 0.9;
int totalWorkingHours = floor(effectiveDays * (8 + 2) * numberOfWorkers);

if (totalWorkingHours >= neededHours) {
return "Yes! " + to_string(totalWorkingHours - neededHours) + " hours left.";
} 
else {
return "Not enough time! " + to_string(neededHours - totalWorkingHours) + " hours needed.";
}
}
