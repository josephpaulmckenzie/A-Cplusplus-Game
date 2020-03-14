

using namespace std; 
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

class HelpMenu {	
  public: 
	string menuOption; 
  
  
    void helpMenu() {
        // Should I allow them to only pick a menu option (using the number) or also 
        // allow an user to type the option its self as well such as "Player Moment")?

        cout <<  endl << "Here you can find helpful commands to make your adevnture easier." << endl << endl;
        cout << " 1.) Player Movements" << endl;
        cout << " 2.) Player Actions" << endl;
        cout << " 3.) Thing 3" << endl;
        cout << " 4.) Thing 4" << endl;
        cout << " 5.) Thing 4" << endl;
        cout << " 6.) Quit Game" << endl << endl;
        cout << "enter menu number: ";
        cin >> menuOption;
        cout <<  endl;
        

        if (menuOption == "1") {
            cout << UNDERLINE << "Player Movments" << CLOSEUNDERLINE << endl << endl;

        } else if(menuOption == "2") {
            cout << UNDERLINE << "Player Actions" << CLOSEUNDERLINE << endl << endl;

        } else if(menuOption == "6") {
            // this currently quits the game
            exit(0);
        } else {
            cout << "Please enter a valid menu option" << endl;
            helpMenu();
        }
    } 
}; 

