#include <iostream>

int main() {

  int dog_age; 
  // This is the dog's age older than 2 years
  std::cout << "Enter your dog's age: \n";
  std::cin >> dog_age;

  std::string dog_name;
  std::cout << "Enter your dog's name: \n";
  std::cin >> dog_name;

  int early_years = 21;
  // The first two years of a dog’s life count as 21 human years
  int later_years;
  int human_years;
  later_years = (dog_age - 2) * 4;
  // Each following year counts as 4 human years
  human_years = early_years + later_years;

  std::cout << "My name is " << dog_name << "! Ruff ruff, I am " << human_years << " years old in human years.\n";
  
}