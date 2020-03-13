#include <iostream>
#include <algorithm>
#include <string>
#include <regex>

#include "dialogue.cpp"
#include "helpmenu.cpp"

using namespace std;
	// Declare an object of class geeks 
	Dialog dialog; 
  HelpMenu helpmenu;
// void help() {



// }

void inventory(string item) {

}

void startGame(string username){
    dialog.welcomeMessage(username);
    string command;
    command = dialog.commandPrompt();
   

    if (command == "help") {
      // open help menu
      helpmenu.helpMenu();
    } else {
      cout << "Sorry that was an invalid command. At anytime you may enter help to access the help menu.";
      helpmenu.helpMenu();
    }
} 

int main() {

  string welcomeMessage;
  string answer;
  std::string pattern("ye|[abc]"); // Regex expression
  std::regex rx(pattern); // Getting the regex object 

  welcomeMessage = "Welcome, would you like to play a game? (Yes/No): ";
  cout << welcomeMessage;
  cin >> answer;
  transform(answer.begin(), answer.end(), answer.begin(), ::tolower); // Lowercases all user input

  // string s(answer); 
  ptrdiff_t number_of_matches = distance(
    sregex_iterator(answer.begin(), answer.end(), rx),
    sregex_iterator()
  );

    if (number_of_matches >= 1) {
       
        cout << "So what can I call you?: "; 
        string username;
        cin >> username;

        startGame(username);
    }
    else if(answer == "no") {
        cout << "Why even start the game if you did not want to play?" << endl; 
    }
    else {
     cout << "Please enter a valid response" << endl; 
     main();
    }
  return 0;
}


