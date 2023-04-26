int main() {
    string message, key;
    cout << "Enter message to encrypt: ";
    getline(cin, message);
    cout << "Enter encryption key: ";
    getline(cin, key);

    string encryptedMessage = "";
    int keyIndex = 0;
    for (int i = 0; i < message.length(); i++) {
        char c = message[i];
        if (isalpha(c)) {
            int shift = key[keyIndex] - 'A';
            c = (c - shift + 26) % 26 + 'A';
            keyIndex = (keyIndex + 1) % key.length();
        }
        encryptedMessage += c;
    }

    cout << "Encrypted message: " << encryptedMessage << endl;
    return 0;
}
