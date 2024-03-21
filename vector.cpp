/* 
Write a for loop that iterates through the delivery_order vector (from 0 to delivery_order.size()). And add each order to total during each iteration.
*/
#include <iostream>
#include <vector>
  
int main() {
  
  std::vector<double> delivery_order;
  
  delivery_order.push_back(8.99);
  delivery_order.push_back(3.75);
  delivery_order.push_back(0.99);
  delivery_order.push_back(5.99);
  
  // Calculate the total using a for loop:
  
  double total = 0.0;
  
  for (int i = 0; i < delivery_order.size(); i++) {
    total = total + delivery_order[i];
    std::cout << total << " \n";
  }
  
  
  
}