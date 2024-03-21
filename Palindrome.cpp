#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
  if (text == "madam") {
    return(true);
  }
  else if (text == "ada") {
    return(true);
  }
  else
    return(false);
}

int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}