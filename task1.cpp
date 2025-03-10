// create a program that converts temperature between celsius, farheniet and kelvin scales.
// Using core DSA Concepts
#include <iostream>
#include <string>
using namespace std;
// Function to convert temperature from Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}
// Function to convert temperature from Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9;
}
// Function to convert temperature from Celsius to Kelvin
double celsiusToKelvin(double celsius)
{
    return celsius + 273.15;
}
// Function to convert temperature from Kelvin to Celsius
double kelvinToCelsius(double kelvin)
{
    return kelvin - 273.15;
}
// Function to convert temperature from Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit)
{
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}
// Function to convert temperature from Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin)
{
    return (kelvin - 273.15) * 9 / 5 + 32;
}

int main()
{
    double celsius, fahrenheit, kelvin;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(celsius) << endl;
    cout << "Temperature in Kelvin: " << celsiusToKelvin(celsius) << endl;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Temperature in Celsius: " << fahrenheitToCelsius(fahrenheit) << endl;
    cout << "Temperature in Kelvin: " << fahrenheitToKelvin(fahrenheit) << endl;
    cout << "Enter temperature in Kelvin: ";
    cin >> kelvin;
    cout << "Temperature in Celsius: " << kelvinToCelsius(kelvin) << endl;
    cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(kelvin) << endl;
    return 0;
}