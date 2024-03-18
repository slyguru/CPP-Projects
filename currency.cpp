/*
*******************Piggy Bank**********************

You just returned from a trip to South America. 
The countries you visited were Colombia, Brazil, and Peru. 

***************************************************
Write a C++ program that prompts the user for the amount of each 
foreign currency and convert to USD. 
*/
#include <iostream>

int main() {
  double pesos, reais, soles;
  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos;
  double Dollars = (pesos * 0.060);
  std::cout << "US Dollars = $ " << Dollars << "\n\n";

  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> reais;
  double Reais = (reais * 0.20);
  std::cout << "US Dollars = $ " << Reais << "\n\n";

  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;
  double Soles = (pesos * 0.27);
  std::cout << "US Dollars = $ " << Soles << "\n\n";
  
  
}