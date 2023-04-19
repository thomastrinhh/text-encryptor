#include <iostream>
using namespace std;


class Encrypt {
    public:
    char text[100];
    
    
    Encrypt();
    
    int Caesar() {
        // Thomas' part
    }
    
    int Vigenere() {
        // Keyan's part
    }
    
    int LoganCypher() {
        // Logan's part
    }
    
    void showText() {
        // To print text after encryption methods 
    }
    
    
};


// Constructor to get text from user
Encrypt::Encrypt() 
{
    cout << "Enter text to be encrypted: ";
    cin >> text;
    cout << text;
    
}

// Driver function
int main() {
    Encrypt message;

    return 0;
}