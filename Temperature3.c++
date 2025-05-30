#include <iostream>

double fahrenheitToKelvin(double fahrenheit) {
  return (fahrenheit - 32.0) * 5.0 / 9.0 + 273.15;
}

int main() {
  double fahrenheit;
  std::cout << "Enter temperature in Fahrenheit: ";
  std::cin >> fahrenheit;
  double kelvin = fahrenheitToKelvin(fahrenheit);
  std::cout << "Temperature in Kelvin: " << kelvin << std::endl;
  return 0;
}