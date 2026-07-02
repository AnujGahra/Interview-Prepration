#include<iostream>
using namespace std;


float convertFahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    float fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    float celsius = convertFahrenheitToCelsius(fahrenheit);
    cout << "Temperature in Celsius: " << celsius << endl;

    return 0;
}