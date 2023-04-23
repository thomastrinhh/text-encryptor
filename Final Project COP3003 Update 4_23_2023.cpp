#include <iostream>
using namespace std;

/*
TODO: 
- Finish encryption algorithms for Caesar(), Vigenere(), and LoganCypher(). Rename LoganCypher(). 
- Make Encrypt class a subclass of parent class Text.
- Add ErrorHandler() function.

CHECKLIST: 
- Inheritance [x]
- Polymorphism []
- Encapsulation [x] 
- Abstraction []
- Composition []
- Overloading []
- Virtual Functions []
- Template Functions []
*/

class Encrypt {
    // Message to be encrypted will be a private member of class Encrypt
    private:
    char text[100];
    
    public:
    
    Encrypt();

    int caesar() {
        // Thomas Code
        cout << "Caesar() successfully called." << endl;
    }
    
    int vigenere() {
        // Keyan's code
        cout << "Vigenere() successfully called." << endl;
    }
    
    int loganCypher() {
        // Logan's code
        cout << "LoganCypher() successfully called." << endl;
    }
    
    // Friend class declaration to allow class Selection to access private members of class Encrypt
    friend class Selection;
    
};

Encrypt::Encrypt() {
    cout << "Encrypt constructor successfully called." << endl;
    
}

// Inheritance
class Selection: private Encrypt {
    public:
    int userChoice;
    
    void setText() {
        cout << "Enter the message you would like to be encrypted: ";
        cin >> text;
    }
    
    void setChoice() {
        cout << "Enter which encryption method you would like to use: ";
        cin >> userChoice;
        
        if (userChoice == 1) 
            caesar();
        else if (userChoice == 2) 
            vigenere();
        else if (userChoice == 3) 
            loganCypher();
        else 
            cout << "You entered an invalid input!" << endl;
            
    }
    
};

// Driver function
int main() {
    
    // Set the value for encryption method
    Selection choice;
    choice.setText();
    choice.setChoice();



}