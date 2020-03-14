#include <iostream>
#include <algorithm>
#include <string>
#include <regex>

// Local files we are importing
#include "dialogue.cpp"
#include "helpmenu.cpp"

using namespace std;
  string command;

	// Declare an object of classes 
	Dialog dialog; 
  HelpMenu helpmenu;


void startGame(string username){

    dialog.welcomeMessage(username);
    command = dialog.commandPrompt();
   
    if (command == "help") {
      // open help menu
      helpmenu.helpMenu();
    } else if(command == "exit") {
      // Ovbiosuly quits the program
      exit(0);
    } else {
      cout << "Sorry that was an invalid command. At anytime you may enter help to access the help menu.";
      helpmenu.helpMenu();
    }
} 

int main() {

  string welcomeMessage;
  string answer;
  string pattern("ye|[abc]"); // Regex expression (This expression checks for any words that begin with ye
  // This allows us to take yes,yeah,yea.,yep and simalar yes realted prompts
  
  std::regex rx(pattern); // Getting the regex object 

  welcomeMessage = "Welcome, would you like to play a game? (Yes/No): ";
  cout << welcomeMessage;
  cin >> answer;
  transform(answer.begin(), answer.end(), answer.begin(), ::tolower); // Lowercases all user input

  ptrdiff_t number_of_matches = distance(
    sregex_iterator(answer.begin(), answer.end(), rx),
    sregex_iterator()
  );

    if (number_of_matches >= 1) {
      cout << "So what can I call you?: ";
      string username;
      cin >> username;
      startGame(username);

    } else if(answer == "no") {
      cout << "Why even start the game if you did not want to play?\n"; 

    } else {
      cout << "Please enter a valid response\n";
      main();
    }

  return 0;
}


