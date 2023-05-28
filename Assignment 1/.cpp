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
    string ciphertext = "tbzvoclymifqef, kdr jriq ioklzbwbf, vzqgdgu iurqqivajp, fvsqpqket fwb wesmieqdnnab hfeotp qw rzroaggudk. afhd hhkcye, nlwi eqabpkyqhp rleejfv fs wclycrpvb, ceq kdrt laipsgivzv agkrdbfprgudk jriq abf pbg il vyve blovaf, iekj txdokfhe blovaf dc vivgbmj. pbgg hgp ga hrevfe pkf kuq exujjaga kj gtt_cwe_umh_lpcl_ntdwe.";
    string keyword = "google";
    string decryptedText = decryptVigenere(ciphertext, keyword);

    cout << decryptedText << endl;

    return 0;
}