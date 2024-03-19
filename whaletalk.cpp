#include <iostream>
#include <vector>
#include <string>

int main() {

  std::string input = "turpentine and turtles";  
  std::vector<char> vowels = {'a','e','i','o','u'};
  std::vector<char> result;
  
  for (int i = 0; i < input.size(); ++i){
    for (int x = 0; x < vowels.size(); ++x){
      if (input[i] == vowels[x]){
        result.push_back(input[i]);
      }
      if (input[i] == 'e' || input[i] == 'u'){
        result.push_back(input[i]);
      }
    }
  }

  for (int y = 0; y < result.size(); ++y){
    std::cout << result[y];
  }





}