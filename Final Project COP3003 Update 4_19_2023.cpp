#include <iostream>
using namespace std;

// TODO: Finish encryption algorithms for Caesar(), Vigenere(), and LoganCypher(). Rename LoganCypher(). Add template function(s), add ErrorHandler() function.


class Encrypt {
    // Message to be encrypted will be a private member of class Encrypt
    private:
    char text[100];
    
    public:
    
    // Calling constructor
    // Might not need this
    Encrypt();

    
    
    int getText() {
        cout << "Enter message to be encrypted: ";
        cin >> text;
        return 0;
    }
    
    // Thomas
    int Caesar() {
        // Disregard lines below. Purely for testing flow of code
        cout << "Caesar() successfully called." << endl;
        return 0;
    }
    
    // Keyan
    int Vigenere() {
        // Disregard lines below. Purely for testing flow of code
        cout << "Vigenere() successfully called." << endl;
        return 0;
    }
    
    // Logan
    int LoganCypher() {
        // Disregard lines below. Purely for testing flow of code
        cout << "LoganCypher() successfully called." << endl;
        return 0;
    }
    
    // Member function to print the encrypted message
    void showText() {
        cout << "Encrypted message: " << text;
    }
};


// Constructor to initialize any values we might need later, currently has no purpose
// Might be useful later
Encrypt::Encrypt() 
{
    cout << "Constructor successfully called." << endl;
    

}

// Driver function
int main() {
    
    // Initializing userChoice for selection of which encryption method to use
    int userChoice;
    
    // Constructor will automatically be called after object "message" is created as a part of class Encrypt
    Encrypt message;
    
    // Get message from user
    message.getText();
    
    // Prompt user for which encryption function to call
    cout << "Enter which encryption method you would like to use: "; cin >> userChoice;
    if (userChoice == 1) 
        message.Caesar();
    else if (userChoice == 2) 
        message.Vigenere();
    else if (userChoice == 3) 
        message.LoganCypher();
    
    // Print the encrypted message
    message.showText();
    
    

    return 0;
}