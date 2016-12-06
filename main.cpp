#include <iostream>
#include <string>

std::string checkWin(std::string entry1, std::string entry2) {

  //Win possibilities for player 1
  std::string winPlayer1[3] = {"13", "32", "21"};

  //Win possibilities for player 2
  std::string winPlayer2[3] = {"31", "23", "12"};

  //Combine both entries
  std::string combination = entry1 + entry2;

  //Compares the combination of the two entries against arrays of win possibilities to determine who won
  //The function returns the number of the player who won
  if (combination == winPlayer1[0] || combination == winPlayer1[1] || combination == winPlayer1[2]) {
    return "1";
  }

  if (combination == winPlayer2[0] || combination == winPlayer2[1] || combination == winPlayer2[2]) {
    return "2";
  }

  return 0;
}

int multiplayer() {
  std::string player1;
  std::string player2;

  //Rock = 1
  //Paper = 2
  //Scissors = 3

  std::string input;

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

  //Skip a line
  std::cout << std::endl;

}

int singleplayer() {

  std::cout << "This part is empty" << std::endl;
  std::cout << "Press any key to go back to the menu" << std::endl;

  //Wait for the input before continuing
  std::string input;
  getline(std::cin, input);

  //Skip a line
  std::cout << std::endl;

  return 0;
}

int gameMenu() {
  bool gameRunning = 1;

  while (gameRunning) {
    //Display the whole menu
    std::cout << "Welcome to rock paper scissors" << std::endl;
    std::cout << "What would you like to do ?" << std::endl;

    //skip a line
    std::cout << std::endl;

    std::cout << "Press 1 to play multiplayer" << std::endl;
    std::cout << "Press 2 to play singleplayer" << std::endl;
    std::cout << "Press 3 to quit" << std::endl;

    //Get the input from the user
    std::string input;
    getline(std::cin, input);

    //Compare the input
    if(input == "1") multiplayer();
    if(input == "2") singleplayer();
    if(input == "3") gameRunning = 0;

  }
  return 0;
}

int main() {
  //Display and run the game menu
  //The whole game will be handled from that function
  gameMenu();

  return 0;
}
