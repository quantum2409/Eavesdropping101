#include <bits/stdc++.h>
using namespace std;

string decryptPermutationCipher(string &encryptedText) {
    string decryptedText;
    int index = 0;
    while (index < encryptedText.length()) {
        char characters[5];
        string interstitials[5];
        for (int curIndex = 0; curIndex < 5; curIndex++) {
            if (isalpha(encryptedText[index])) {
                characters[curIndex] = encryptedText[index];
                while (!isalpha(encryptedText[index + 1]) && index < encryptedText.length() - 1)
                    interstitials[curIndex] += encryptedText[++index];
            }
            index++;
        }
        decryptedText += characters[3] + interstitials[0] + characters[2] + interstitials[1] +
            characters[4] + interstitials[2] + characters[0] + interstitials[3] + characters[1] + interstitials[4];
    }
    string substitutionRules[] = { "Ow", "Aq", "Ta", "Sl", "Ph", "Ev", "Hf", "Gg", "Ud", "Rn", "Km", "Wr", "Dp", "Ic", "Ny", "Bj",
                                        "Fs", "Ce", "Lt", "Yx", "Qi", "Mu", "Jk", "Vb" };

    for (string &rule : substitutionRules) {
        size_t pos = decryptedText.find(rule[1]);
        while (pos != string::npos) {
            decryptedText.replace(pos, 1, string(1, rule[0]));
            pos = decryptedText.find(rule[1], pos + 1);
        }
    }

    string formattedText;
    int position = 0;
    bool afterFullStop = false;
    bool replaceSpaces = false;
    for (char c : decryptedText) {
        if (!isalpha(c)) {
            if (afterFullStop) {
                formattedText += c;
            } else {
                if (c == '.') {
                    afterFullStop = true;
                    replaceSpaces = true;
                } else if (c == '_') {
                    formattedText += ' ';
                } else {
                    if (replaceSpaces) {
                        formattedText += " ";
                        formattedText += c;
                        replaceSpaces = false;
                    } else {
                        formattedText += c;
                    }
                }
            }
                continue;
        }
        formattedText += c;
        position++;
        if (position == 5) {
            position = 0;
        }
    }

    return formattedText;
}

int main() {
    string encryptedText = "qmnjvsa nv wewc flct vprj tj tvvplvl fv xja vqildhc xmlnvc nacyclpa fc gyt vfvw. fv wgqyp, pqq pqcs y wsq rx qmnjvafy cgv tlvhf cw tyl aeuq fv xja tkbv cqnsqs. lhf avawnc cv eas fuqb qvq tc yllrqr xxwa cfy. psdc uqf avrqc gefq pyat trac xwv taa wwd dv eas flcbq. vd trawm vupq quw x decgqcwt, yq yafl vlqs yqklhq! snafq vml lhvqpawr nqg_vfusr_ec_wawy qp fn wgawdgf.";

    string decryptedMessage = decryptPermutationCipher(encryptedText);

    cout << "Decrypted message: " << decryptedMessage << endl;
}