// This program outputs a random number 
// You have to choose your fave number

#include <iostream>

int main() {
  
  // This seeds the random number generator:
  srand (time(NULL));
  
  // Use rand() below to initialize;
  int the_amazing_random_number = rand() % 200;
  // Declaring the integer as std::rand() % also works
  
  // This outputs the random number:
  std::cout << the_amazing_random_number << "\n";
  
}