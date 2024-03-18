/* This program:
Prompts the user to select either Rock, Paper, Scissors, Lizard, or Spock.
Instructs the computer to randomly select either Rock, Paper, Scissors, Lizard, or Spock.
Compares the user’s choice and the computer’s choice and determine the winner.
Informs the user who the winner is.
*/
#include <iostream>
#include <stdlib.h>
int main () {
  srand (time(NULL));

  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "Pick 1, 2 or 3\n";
  std::cin >> user;

  std::cout << "shoot! \n";
 
 if (user == 1)
    std::cout << "Your choice: ✊\n";
  else if (user == 2)
    std::cout << "Your choice: ✋\n";
  else
    std::cout << "Your choice: ✌️\n";

  if (computer == 1)
    std::cout << "Computer's Choice: ✊\n";
  else if (computer == 2)
    std::cout << "Computer's Choice: ✋\n";
  else
    std::cout << "Computer's Choice: ✌️\n";


  if (user == computer) {
    std::cout << "A stalemate, WOW!\n";
  }

  else if (user == 1) {
    if (computer == 2) {

      std::cout << "You lost! Losing Sucks!\n";

    }
    if (computer == 3) {
      std::cout << "You won! Woohoo!\n";
    }

  }
  else if (user == 2) {

    if (computer == 1) {

      std::cout << "You won! Woohoo!\n";

    }
    if (computer == 3) {

      std::cout << "You lost! Losing Sucks!\n";

    }

  }

  else if (user == 3) {

    if (computer == 1) {

      std::cout << "You won! woohoo!\n";

    }
    if (computer == 2) {

      std::cout << "You lost! JUST LIKE ARSENAL TULA!\n";

    }

  }
  

}