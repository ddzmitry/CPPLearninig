// Section 11
// Function Parmameters
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double fahrenhite_temp);
double fahrenheit_to_kelvin(double fahrenhite_temp);

//celsius_temperature
//kelvin_temperature
double fahrenheit_to_celsius(double fahrenhite_temp){

	return round(((5.0/9.0) * (fahrenhite_temp -32)));
}

double fahrenheit_to_kelvin(double fahrenhite_temp){

	return fahrenheit_to_celsius(fahrenhite_temp) + 273;

}

int main() {

    double celsius_temperature = fahrenheit_to_celsius(100.0);
    double kelvin_temperature = fahrenheit_to_kelvin(200.0);
    cout << celsius_temperature << endl;
    cout << kelvin_temperature << endl;
    cout << endl;
    return 0;
}

