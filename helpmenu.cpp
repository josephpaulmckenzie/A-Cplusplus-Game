

using namespace std; 

class HelpMenu {	
  public: 
	string menuOption; 
  
  
    void helpMenu() {
        cout << "Here you can find helpful commands to make you journey easier." << endl << endl;
        cout << " 1.) Player Movement" << endl;
        cin >> menuOption;


        if (menuOption == "1") {
           cout << "HELLO";
        } else 
        {
            cout << "Please enter a valid menu option";
        }
     
    } 
}; 

