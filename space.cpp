#include <iostream>

int main() {
  double earth_weight;
  std::cout << "What is your earth weight: \n";
  std::cin >> earth_weight;
  double planetary_weight;

  int planet;
  std::cout << "Enter a planet number to fight on: \n";
  std::cin >> planet;

switch (planet) {
  case 1:
    planetary_weight = earth_weight * 0.38;
    std::cout << "Your Mercury planetary weight is: \n" << planetary_weight << " \n";
    break;
  case 2:
    planetary_weight = earth_weight * 0.91;
    std::cout << "Your Venus planetary weight is: \n" << planetary_weight << " \n"; 
    break; 
  case 3:
    planetary_weight = earth_weight * 0.38;
    std::cout << "Your Mars planetary weight is: \n" << planetary_weight << " \n";  
    break;
  case 4:
    planetary_weight = earth_weight * 2.34;
    std::cout << "Your Jupiter planetary weight is: \n" << planetary_weight << " \n";  
    break;
  case 5:
    planetary_weight = earth_weight * 1.06;
    std::cout << "Your Saturn planetary weight is: \n" << planetary_weight << " \n"; 
    break; 
  case 6:
    planetary_weight = earth_weight * 0.92;
    std::cout << "Your Uranus planetary weight is: \n" << planetary_weight << " \n";  
    break;
  case 7:
    planetary_weight = earth_weight * 1.19;
    std::cout << "Your Neptune planetary weight is: \n" << planetary_weight << " \n";
    break;
  default:
    std::cout << "Invalid\n";
    break;
  
}


  
  
}