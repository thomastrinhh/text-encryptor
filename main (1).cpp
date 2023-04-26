#include <iostream>
#include <string>

using namespace std;

int main()
{
    string plaintext, key;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);

    cout << "Enter key: ";
    getline(cin, key);

    // Make sure key is at least as long as plaintext
    while (key.length() < plaintext.length())
    {
        key += key;
    }

    // Encrypt the plaintext using the key
    string ciphertext = "";
    for (int i = 0; i < plaintext.length(); i++)
    {
        char c = plaintext[i];
        char k = key[i];
        char enc = ((c - 'A') + (k - 'A')) % 26 + 'A';
        ciphertext += enc;
    }

    cout << "Ciphertext: " << ciphertext << endl;

    return 0;
}
