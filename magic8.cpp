#include <iostream>
#include <cstdlib>

int main() {

  int answer = std::rand () % 10;
  srand(time(NULL));

switch (answer) {
  case 0:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "It is certain \n\n" ;
    break;
  case 1:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "It is decidedly so. \n\n"; 
    break; 
  case 2:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "Without a doubt. \n\n";  
    break;
  case 3:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "Yes - definitely. \n\n";  
    break;
  case 4:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "You may rely on it. \n\n"; 
    break; 
  case 5:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "As I see it, yes. \n\n";  
    break;
  case 6:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "Most likely. \n\n";
    break;
  case 7:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "Outlook good. \n\n";
    break;
  case 8:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "Yes. \n\n";
    break;
  case 9:
    std::cout << "MAGIC 8-BALL:"  << " \n\n"<< "Yes. \n\n";
    break;
  default:
    std::cout << "Invalid\n\n";
    break;
}
}