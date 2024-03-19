────────────────────────────────────────────────────────────────
   1   │ /* 
   2   │ Write a program to find the sum of even numbers and the product
       │  of 
   3   │ odd numbers in a vector.
   4   │ 
   5   │ For example:
   6   │ Suppose we have a vector that is {2, 4, 3, 6, 1, 9}.
   7   │ */

   8   │ #include <iostream>
   9   │ #include <vector>
  10   │   
  11   │ int main() {
  12   │   
  13   │   std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  14   │   
  15   │     
  16   │   int sum = 0;
  17   │   int product = 1; 
  18   │   
  19   │   for (int i = 0; i < numbers.size(); i++) {
  20   │     if (numbers[i] % 2 == 0){
  21   │       sum = sum + numbers[i];
  22   │     }
  23   │     else {
  24   │       product = product * numbers[i]; 
  25   │     }
  26   │   }
  27   │ std::cout << "Sum of even numbers is " << sum << " \n";    
  28   │ std::cout << "Product of odd numbers is " << product << " \n";
  29   │ 
  30   │ }
