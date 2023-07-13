#include <iostream>
using namespace std;

string encrypt(string text, string key) {
    string encryptedText = "";
    int keyIndex = 0;
    for (int i = 0; i < text.length(); i++) {
        if (isalpha(text[i])) {
            char base = isupper(text[i]) ? 'A' : 'a';
            char encryptedChar = (text[i] - base + key[keyIndex % key.length()] - 'a' + 1) % 26 + base;
            encryptedText += encryptedChar;
            keyIndex++;
        }
        else {
            encryptedText += text[i];
        }
    }
    return encryptedText;
}

int main() {
    string input = "tbzvoclymifqef, kdr jriq ioklzbwbf, vzqgdgu iurqqivajp, fvsqpqket fwb wesmieqdnnab hfeotp qw rzroaggudk. afhd hhkcye, nlwi eqabpkyqhp rleejfv fs wclycrpvb, ceq kdrt laipsgivzv agkrdbfprgudk jriq abf pbg il vyve blovaf, iekj txdokfhe blovaf dc vivgbmj. pbgg hgp ga hrevfe pkf kuq exujjaga kj gtt_cwe_umh_lpcl_ntdwe.";
    string key = "imnkcx";

    string encryptedText = encrypt(input, key);
    cout << encryptedText << endl;

    return 0;
}