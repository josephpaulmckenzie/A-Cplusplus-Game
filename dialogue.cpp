
#include <array>
#include <iostream>
using namespace std; 

class Dialog {	
  public: 
	string username; 
  
    void welcomeMessage(string username) { 

  //      string welcomeMessage[5] = {"Dog","Elephant", "Lion", "Deer", "Tiger"}; 

      cout << username << " suddenly wakes up in a big vast green field with a patch of woods nearby and vast rolling hills can be seen off in the distance. " << endl;
      cout << "Not knowing where you are or how you came to be here disturbs you a little bit. " << endl;
   
    }

     string commandPrompt() {
         cout <<  "enter command: ";
          string command;
          cin >> command;
          return command;
    }

}; 

