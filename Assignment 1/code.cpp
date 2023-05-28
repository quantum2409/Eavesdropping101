#include <bits/stdc++.h>
using namespace std;

string decryptVigenere(const string &ciphertext, const string &password) {
    string decryptedText;
    int ciphertextLength = ciphertext.length();
    int passwordLength = password.length();

    for (int i = 0; i < ciphertextLength; i++) {
        char ciphertextChar = ciphertext[i];
        char passwordChar = password[i % passwordLength];

        char decryptedChar = ((ciphertextChar - passwordChar + 26) % 26) + 'a';

        decryptedText += decryptedChar;
    }

    return decryptedText;
}

int main() {
    string ciphertext = "tbzvoclymifqefkdrjriqioklzbwbfvzqgdguiurqqivajpfvsqpqketfwbwesmieqdnnabhfeotpqwrzroaggudkafhdhhkcye";
    string keyword = "rnmpxc";

    string decryptedText = decryptVigenere(ciphertext, keyword);

    cout << decryptedText << endl;

    return 0;
}