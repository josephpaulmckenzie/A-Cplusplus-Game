// my first string
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void startGame(string name){
    cout << "Welcome to the game " << name <<  "\nWe begin our journey at the begining of the rainbow bridge" << endl;
} 

int main() {
  string welcomeMessage;
  welcomeMessage = "Welcome, would you like to play a game? (Yes/No)";
  cout << welcomeMessage << endl;
  string answer;
  cin >> answer;
  transform(answer.begin(), answer.end(), answer.begin(), ::tolower);

    if (answer == "yes") {
        cout << "Awesome, what can I call you?" << endl; 
        string name;
        cin >> name;
        startGame(name);
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


