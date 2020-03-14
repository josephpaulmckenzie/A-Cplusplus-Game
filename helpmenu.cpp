using namespace std; 
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

class HelpMenu {	
  public: 
	string menuOption; 
  
  
    void helpMenu() {
        // Should I allow them to only pick a menu option (using the number) or also 
        // allow an user to type the option its self as well such as "Player Moment")?

        // We can use the newline character "\n" or endl to acheieve the same thing however
        // what I'm seing is when using endl your calling << a heck of lot plus it flushes output buffer when using endl

        cout << "\nHere you can find helpful commands to make your adevnture easier.\n\n";
        cout << " 1.) Player Movements\n";
        cout << " 2.) Player Actions\n";
        cout << " 3.) Thing 3\n";
        cout << " 4.) Thing 4\n";
        cout << " 5.) Thing 5\n";
        cout << " 6.) Quit Game\n\n";
        cout << "enter menu number: ";
        cin >> menuOption;
        cout << endl;
        
        if (menuOption == "1") {
            cout << UNDERLINE << "Player Movments" << CLOSEUNDERLINE << endl << endl;

        } else if (menuOption == "2") {
            cout << UNDERLINE << "Player Actions" << CLOSEUNDERLINE << endl << endl;

        } else if (menuOption == "6") {
            // this currently quits the game
            exit(0);
        } else {
            cout << "Please enter a valid menu option" << endl;
            helpMenu();
        }
    } 
}; 

