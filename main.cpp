#include <iostream>
#include <string>

std::string checkWin(std::string entry1, std::string entry2) {

  //Win possibilities for player 1
  std::string winPlayer1[3] = {"13", "32", "21"};

  //Win possibilities for player 2
  std::string winPlayer2[3] = {"31", "23", "12"};

  //Combine both entries
  std::string combination = entry1 + entry2;

  if (combination == winPlayer1[0] || combination == winPlayer1[1] || combination == winPlayer1[2]) {
    return "1";
  }

  if (combination == winPlayer2[0] || combination == winPlayer2[1] || combination == winPlayer2[2]) {
    return "2";
  }

  return 0;
}

int main() {

  bool gameRunning = true;

  std::string player1;
  std::string player2;

  //Rock = 1
  //Paper = 2
  //Scissors = 3

  std::cout << "Welcome to rock paper scissors" << std::endl;

  std::string input;

  while(gameRunning) {
    std::cout << "Player 1:" << std::endl;
    std::cout << "Enter 1 for rock, 2 for paper and 3 for scissors" << std::endl;

    getline(std::cin, input);
    player1 = input;

    std::cout << "Player 2:" << std::endl;
    std::cout << "Enter 1 for rock, 2 for paper and 3 for scissors" << std::endl;

    getline(std::cin, input);
    player2 = input;

    std::string result = checkWin(player1, player2);

    std::cout << "Player " + result + " wins !" << std::endl;

  }

  return 0;
}
